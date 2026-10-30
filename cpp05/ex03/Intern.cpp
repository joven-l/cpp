#include "Intern.hpp"
#include <iostream>

Intern::Intern(void)
{
	std::cout << "Intern Default Constructor called" << std::endl;
	return ;
}

Intern::Intern(const Intern &param)
{
	std::cout << "Intern Copy Constructor called" << std::endl;
	return ;
}

Intern &Intern::operator=(const Intern &param)
{
	std::cout << "Intern Copy assignment operator called called" << std::endl;
	return (*this);
}

Intern::~Intern(void)
{
	std::cout << "Intern Destructor called" << std::endl;
	return ;
}
