#include "WrongDog.hpp"
#include <iostream>

WrongDog::WrongDog(void)
{
	this->type = "WrongDog";
	std::cout << "WrongDog Default Constructor called for type: " << this->type << std::endl;
	return ;
}

WrongDog::WrongDog(const WrongDog &param) : WrongAnimal(param)
{
	this->type = param.type;
	std::cout << "WrongDog Copy constructor called for type: " << this->type << std::endl;
	return ;
}

WrongDog &WrongDog::operator=(const WrongDog &param)
{
	WrongAnimal::operator=(param);
	std::cout << "WrongDog Copy assignment operator called for type: " << this->type << std::endl;
	return (*this);
}

WrongDog::~WrongDog(void)
{
	std::cout << "WrongDog Destructor called for type: " << this->type << std::endl;
	return ;
}

void WrongDog::makeSound(void) const
{
	std::cout << "WrongDog barks!" << std::endl;
	return ;
}

std::string WrongDog::getType(void) const
{
	return (this->type);
}
