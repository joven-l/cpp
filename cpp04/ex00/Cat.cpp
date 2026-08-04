#include "Cat.hpp"
#include <iostream>

Cat::Cat(void)
{
	this->type = "Cat";
	std::cout << "Cat Default Constructor called for type: " << this->type << std::endl;
	return ;
}

Cat::Cat(const Cat &param) : Animal(param)
{
	this->type = param.type;
	std::cout << "Cat Copy constructor called for type: " << this->type << std::endl;
	return ;
}

Cat &Cat::operator=(const Cat &param)
{
	Animal::operator=(param);
	std::cout << "Cat Copy assignment operator called for type: " << this->type << std::endl;
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat Destructor called for type: " << this->type << std::endl;
	return ;
}

void Cat::makeSound(void) const
{
	std::cout << "Cat meows!" << std::endl;
	return ;
}

std::string Cat::getType(void) const
{
	return (this->type);
}
