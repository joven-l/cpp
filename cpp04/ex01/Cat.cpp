#include "Cat.hpp"
#include <iostream>

Cat::Cat(void)
{
	this->type = "Cat";
	this->_brain = new Brain();
	std::cout << "Cat Default Constructor called for type: " << this->type << std::endl;
	return ;
}

Cat::Cat(const Cat &param) : Animal(param)
{
	this->type = param.type;
	this->_brain = new Brain(*param._brain);
	std::cout << "Cat Copy constructor called for type: " << this->type << std::endl;
	return ;
}

Cat &Cat::operator=(const Cat &param)
{
	Animal::operator=(param);
	this->_brain = new Brain(*param._brain);
	std::cout << "Cat Copy assignment operator called for type: " << this->type << std::endl;
	return (*this);
}

Cat::~Cat(void)
{
	delete (this->_brain);
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


void Cat::setIdea(int idx, std::string idea)
{
	this->_brain->_ideas[idx] = idea;
	return ;
}
std::string Cat::getIdea(int idx) const
{
	return (this->_brain->_ideas[idx]);
}
