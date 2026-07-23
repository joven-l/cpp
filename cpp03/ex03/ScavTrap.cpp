#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(void) : ClapTrap("Default")
{
	this->_name = "Default";
	this->_HP = scav_default_HP;
	this->_energy = scav_default_energy;
	this->_atk = scav_default_atk;
	std::cout << "Default Constructor called (ScavTrap " << this->_name << ")" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_name = name;
	this->_HP = scav_default_HP;
	this->_energy = scav_default_energy;
	this->_atk = scav_default_atk;
	std::cout << "Name constructor called (ScavTrap " << this->_name << ")" << std::endl;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap &param) : ClapTrap(param)
{
	this->_name = param._name;
	this->_HP = param._HP;
	this->_energy = param._energy;
	this->_atk = param._atk;
	std::cout << "Copy constructor called (ScavTrap " << this->_name << ")" << std::endl;
	return ;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &param)
{
	ClapTrap::operator=(param);
	this->_name = param._name;
	this->_HP = param._HP;
	this->_energy = param._energy;
	this->_atk = param._atk;
	std::cout << "Copy assignment operator called (ScavTrap " << this->_name << ")" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destructor called (ScavTrap " << this->_name << ")" << std::endl;
	return ;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->_HP == 0)
	{
		std::cout << "ScavTrap " << this->_name << " has no HP and cannot attack" << std::endl;
		return ;
	}
	if (this->_energy == 0)
	{
		std::cout << "ScavTrap " << this->_name << " has no energy and cannot attack" << std::endl;
		return ;
	}
	this->_energy--;
	std::cout << "ScavTrap " << this->_name << " attacks " << target << " for " << this->_atk << " HP"
	<< ". Remaining energy: " << this->_energy << std::endl;
	return ;
}

void ScavTrap::guardGate()
{
	std::cout << this->_name << " is now in Gate keeper mode." << std::endl;
}
