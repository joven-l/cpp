#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(void) : ClapTrap("Default")
{
	this->_name = "Default";
	this->_HP = frag_default_HP;
	this->_energy = frag_default_energy;
	this->_atk = frag_default_atk;
	std::cout << "Default Constructor called (FragTrap " << this->_name << ")" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_name = name;
	this->_HP = frag_default_HP;
	this->_energy = frag_default_energy;
	this->_atk = frag_default_atk;
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

void FragTrap::highFivesGuys(void)
{
	std::cout << this->_name << " asks \"PLEASE HIGH-FIVE ME\"." << std::endl;
}
