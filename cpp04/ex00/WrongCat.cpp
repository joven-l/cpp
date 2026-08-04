#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(void)
{
	this->type = "WrongCat";
	std::cout << "WrongCat Default Constructor called for type: " << this->type << std::endl;
	return ;
}

WrongCat::WrongCat(const WrongCat &param) : WrongAnimal(param)
{
	this->type = param.type;
	std::cout << "WrongCat Copy constructor called for type: " << this->type << std::endl;
	return ;
}

WrongCat &WrongCat::operator=(const WrongCat &param)
{
	WrongAnimal::operator=(param);
	std::cout << "WrongCat Copy assignment operator called for type: " << this->type << std::endl;
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat Destructor called for type: " << this->type << std::endl;
	return ;
}

void WrongCat::makeSound(void) const
{
	std::cout << "WrongCat meows!" << std::endl;
	return ;
}

std::string WrongCat::getType(void) const
{
	return (this->type);
}
