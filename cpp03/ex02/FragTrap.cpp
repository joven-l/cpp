#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(void) : ClapTrap(""), _name(""), _HP(frag_default_HP), _energy(frag_default_energy), _atk(frag_default_atk)
{
	std::cout << "Default Constructor called (FragTrap " << this->_name << ")" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name), _name(name), _HP(frag_default_HP), _energy(frag_default_energy), _atk(frag_default_atk)
{
	std::cout << "Name constructor called (FragTrap " << this->_name << ")" << std::endl;
	return ;
}

FragTrap::FragTrap(const FragTrap &param) : ClapTrap(param)
{
	this->_name = param._name;
	this->_HP = param._HP;
	this->_energy = param._energy;
	this->_atk = param._atk;
	std::cout << "Copy constructor called (FragTrap " << this->_name << ")" << std::endl;
	return ;
}

FragTrap &FragTrap::operator=(const FragTrap &param)
{
	ClapTrap::operator=(param);
	this->_name = param._name;
	this->_HP = param._HP;
	this->_energy = param._energy;
	this->_atk = param._atk;
	std::cout << "Copy assignment operator called (FragTrap " << this->_name << ")" << std::endl;
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "Destructor called (FragTrap " << this->_name << ")" << std::endl;
	return ;
}

void FragTrap::attack(const std::string& target)
{
	if (this->_HP == 0)
	{
		std::cout << "FragTrap " << this->_name << " has no HP and cannot attack" << std::endl;
		return ;
	}
	if (this->_energy == 0)
	{
		std::cout << "FragTrap " << this->_name << " has no energy and cannot attack" << std::endl;
		return ;
	}
	this->_energy--;
	std::cout << "FragTrap " << this->_name << " attacks " << target << " for " << this->_atk << " HP"
	<< ". Remaining energy: " << this->_energy << std::endl;
	return ;
}

void FragTrap::takeDamage(unsigned int amount)
{
	if (this->_HP == 0)
	{
		std::cout << "FragTrap " << this->_name << " already has 0 HP" << std::endl;
		return ;
	}
	if (amount >= this->_HP)
	{
		std::cout << "FragTrap " << this->_name << " takes " << this->_HP << " damage and dies" << std::endl;
		this->_HP -= this->_HP;
		return ;
	}
	this->_HP -= amount;
	std::cout << "FragTrap " << this->_name << " takes damage and loses " << amount << " HP"
	<< ". Remaining HP: " << this->_HP << ". Remaining energy: " << this->_energy << std::endl;
	return ;
}

void FragTrap::beRepaired(unsigned int amount)
{
	if (this->_HP == 0)
	{
		std::cout << "FragTrap " << this->_name << " has no HP and cannot heal" << std::endl;
		return ;
	}
	if (this->_energy == 0)
	{
		std::cout << "FragTrap " << this->_name << " has no energy and cannot heal" << std::endl;
		return ;
	}
	this->_HP += amount;
	this->_energy--;
	std::cout << "FragTrap " << this->_name << " is repaired for " << amount << " HP"
	<< ". Remaining HP: " << this->_HP << ". Remaining energy: " << this->_energy << std::endl;
	return ;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << this->_name << " asks \"PLEASE HIGH-FIVE ME\"." << std::endl;
}
