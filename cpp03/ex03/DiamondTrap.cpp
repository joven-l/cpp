#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(void) : FragTrap(""), ScavTrap("");
{
	ClapTrap::_name = "" + "_clap_name";
	std::cout << "Default constructor called (DiamondTrap " << this->_name << ")" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(std::string name) : FragTrap(name), ScavTrap(name);
{
	ClapTrap::_name = name + "_clap_name";
	this->_HP = FragTrap::_HP;
	this->_energy = ScavTrap::_energy;
	this->_atk = FragTrap::_atk;
	std::cout << "Name constructor called (DiamondTrap " << this->_name << ")" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(const DiamondTrap &param) : ClapTrap(param)
{
	this->_name = param._name;
	this->_HP = param._HP;
	this->_energy = param._energy;
	this->_atk = param._atk;
	std::cout << "Copy constructor called (DiamondTrap " << this->_name << ")" << std::endl;
	return ;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &param)
{
	ClapTrap::operator=(param);
	this->_name = param._name;
	this->_HP = param._HP;
	this->_energy = param._energy;
	this->_atk = param._atk;
	std::cout << "Copy assignment operator called (DiamondTrap " << this->_name << ")" << std::endl;
	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "Destructor called (DiamondTrap " << this->_name << ")" << std::endl;
	return ;
}

void DiamondTrap::attack(const std::string& target)
{
	if (this->_HP == 0)
	{
		std::cout << "DiamondTrap " << this->_name << " has no HP and cannot attack" << std::endl;
		return ;
	}
	if (this->_energy == 0)
	{
		std::cout << "DiamondTrap " << this->_name << " has no energy and cannot attack" << std::endl;
		return ;
	}
	this->_energy--;
	std::cout << "DiamondTrap " << this->_name << " attacks " << target << " for " << this->_atk << " HP"
	<< ". Remaining energy: " << this->_energy << std::endl;
	return ;
}

void DiamondTrap::takeDamage(unsigned int amount)
{
	if (this->_HP == 0)
	{
		std::cout << "DiamondTrap " << this->_name << " already has 0 HP" << std::endl;
		return ;
	}
	if (amount >= this->_HP)
	{
		std::cout << "DiamondTrap " << this->_name << " takes " << this->_HP << " damage and dies" << std::endl;
		this->_HP -= this->_HP;
		return ;
	}
	this->_HP -= amount;
	std::cout << "DiamondTrap " << this->_name << " takes damage and loses " << amount << " HP"
	<< ". Remaining HP: " << this->_HP << ". Remaining energy: " << this->_energy << std::endl;
	return ;
}

void DiamondTrap::beRepaired(unsigned int amount)
{
	if (this->_HP == 0)
	{
		std::cout << "DiamondTrap " << this->_name << " has no HP and cannot heal" << std::endl;
		return ;
	}
	if (this->_energy == 0)
	{
		std::cout << "DiamondTrap " << this->_name << " has no energy and cannot heal" << std::endl;
		return ;
	}
	this->_HP += amount;
	this->_energy--;
	std::cout << "DiamondTrap " << this->_name << " is repaired for " << amount << " HP"
	<< ". Remaining HP: " << this->_HP << ". Remaining energy: " << this->_energy << std::endl;
	return ;
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name: " << this->_name << ", ClapTrap name: " << ClapTrap->_name << std::endl
	return ;
}
