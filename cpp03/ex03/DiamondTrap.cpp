#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(void) : ScavTrap("Default"), FragTrap("Default")
{
	this->ClapTrap::_name = "Default_clap_name";
	this->_name = "Default";
	this->_HP = frag_default_HP;
	this->_energy = scav_default_energy;
	this->_atk = frag_default_atk;
	std::cout << "Default constructor called (DiamondTrap " << this->_name << ")" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name), FragTrap(name)
{
	this->ClapTrap::_name = name + "_clap_name";
	this->_name = name;
	this->_HP = frag_default_HP;
	this->_energy = scav_default_energy;
	this->_atk = frag_default_atk;
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

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name: " << this->_name << ", ClapTrap name: " << ClapTrap::_name << std::endl;
	return ;
}
