#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(void)
{
	this->type = "WrongAnimal";
	std::cout << "WrongAnimal Default Constructor called for type: " << this->type << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal &param)
{
	this->type = param.type;
	std::cout << "WrongAnimal Copy constructor called for type: " << this->type << std::endl;
	return ;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &param)
{
	this->type = param.type;
	std::cout << "WrongAnimal Copy assignment operator called for type: " << this->type << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal Destructor called for type: " << this->type << std::endl;
	return ;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal sounds!" << std::endl;
	return ;
}

std::string WrongAnimal::getType(void) const
{
	return (this->type);
}
