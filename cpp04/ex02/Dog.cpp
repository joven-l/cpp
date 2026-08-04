#include "Dog.hpp"
#include <iostream>

Dog::Dog(void)
{
	this->type = "Dog";
	this->_brain = new Brain();
	std::cout << "Dog Default Constructor called for type: " << this->type << std::endl;
	return ;
}

Dog::Dog(const Dog &param) : Animal(param)
{
	this->type = param.type;
	this->_brain = new Brain(*param._brain);
	std::cout << "Dog Copy constructor called for type: " << this->type << std::endl;
	return ;
}

Dog &Dog::operator=(const Dog &param)
{
	Animal::operator=(param);
	this->_brain = new Brain(*param._brain);
	std::cout << "Dog Copy assignment operator called for type: " << this->type << std::endl;
	return (*this);
}

Dog::~Dog(void)
{
	delete (this->_brain);
	std::cout << "Dog Destructor called for type: " << this->type << std::endl;
	return ;
}

void Dog::makeSound(void) const
{
	std::cout << "Dog meows!" << std::endl;
	return ;
}

std::string Dog::getType(void) const
{
	return (this->type);
}


void Dog::setIdea(int idx, std::string idea)
{
	this->_brain->_ideas[idx] = idea;
	return ;
}
std::string Dog::getIdea(int idx) const
{
	return (this->_brain->_ideas[idx]);
}
