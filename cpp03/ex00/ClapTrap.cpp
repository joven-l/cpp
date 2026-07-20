#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string name) : _name(name), _HP(default_HP), _energy(default_energy), _atk(default_atk)
{
	std::cout << "Default Constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap &param)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_name = param._name;
	this->_HP = param._HP;
	this->_energy = param._energy;
	this->_atk = param._atk;
	return ;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &param)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_name = param._name;
	this->_HP = param._HP;
	this->_energy = param._energy;
	this->_atk = param._atk;
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
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