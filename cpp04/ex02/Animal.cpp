#include "Animal.hpp"
#include <iostream>

Animal::Animal(void)
{
	this->type = "Animal";
	std::cout << "Animal Default Constructor called for type: " << this->type << std::endl;
	return ;
}

Animal::Animal(const Animal &param)
{
	this->type = param.type;
	std::cout << "Animal Copy constructor called for type: " << this->type << std::endl;
	return ;
}

Animal &Animal::operator=(const Animal &param)
{
	this->type = param.type;
	std::cout << "Animal Copy assignment operator called for type: " << this->type << std::endl;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Animal Destructor called for type: " << this->type << std::endl;
	return ;
}

void Animal::makeSound(void) const
{
	std::cout << "Animal sounds!" << std::endl;
	return ;
}

std::string Animal::getType(void) const
{
	return (this->type);
}
