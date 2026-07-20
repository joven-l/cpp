#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(void) : _name(""), _HP(clap_default_HP), _energy(clap_default_energy), _atk(clap_default_atk)
{
	std::cout << "Default constructor called (ClapTrap " << this->_name << ")" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _HP(clap_default_HP), _energy(clap_default_energy), _atk(clap_default_atk)
{
	std::cout << "Name constructor called (ClapTrap " << this->_name << ")" << std::endl;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap &param)
{
	this->_name = param._name;
	this->_HP = param._HP;
	this->_energy = param._energy;
	this->_atk = param._atk;
	std::cout << "Copy constructor called (ClapTrap " << this->_name << ")" << std::endl;
	return ;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &param)
{
	this->_name = param._name;
	this->_HP = param._HP;
	this->_energy = param._energy;
	this->_atk = param._atk;
	std::cout << "Copy assignment operator called (ClapTrap " << this->_name << ")" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called (ClapTrap " << this->_name << ")" << std::endl;
	return ;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_HP == 0)
	{
		std::cout << "Claptrap " << this->_name << " has no HP and cannot attack" << std::endl;
		return ;
	}
	if (this->_energy == 0)
	{
		std::cout << "Claptrap " << this->_name << " has no energy and cannot attack" << std::endl;
		return ;
	}
	this->_energy--;
	std::cout << "Claptrap " << this->_name << " attacks " << target << " for " << this->_atk << " HP"
	<< ". Remaining energy: " << this->_energy << std::endl;
	return ;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_HP == 0)
	{
		std::cout << "Claptrap " << this->_name << " already has 0 HP" << std::endl;
		return ;
	}
	if (amount >= this->_HP)
	{
		std::cout << "Claptrap " << this->_name << " takes " << this->_HP << " damage and dies" << std::endl;
		this->_HP -= this->_HP;
		return ;
	}
	this->_HP -= amount;
	std::cout << "Claptrap " << this->_name << " takes damage and loses " << amount << " HP"
	<< ". Remaining HP: " << this->_HP << ". Remaining energy: " << this->_energy << std::endl;
	return ;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_HP == 0)
	{
		std::cout << "Claptrap " << this->_name << " has no HP and cannot heal" << std::endl;
		return ;
	}
	if (this->_energy == 0)
	{
		std::cout << "Claptrap " << this->_name << " has no energy and cannot heal" << std::endl;
		return ;
	}
	this->_HP += amount;
	this->_energy--;
	std::cout << "Claptrap " << this->_name << " is repaired for " << amount << " HP"
	<< ". Remaining HP: " << this->_HP << ". Remaining energy: " << this->_energy << std::endl;
	return ;
}