#include "Brain.hpp"
#include <iostream>

Brain::Brain(void)
{
	std::cout << "Brain Default Constructor called" << std::endl;
	return ;
}

Brain::Brain(const Brain &param)
{
	int i = 0;
	while (i < idea_count)
	{
		this->_ideas[i] = param._ideas[i];
		i++;
	}
	std::cout << "Brain Copy constructor called" << std::endl;
	return ;
}

Brain &Brain::operator=(const Brain &param)
{
	int i = 0;
	while (i < idea_count)
	{
		this->_ideas[i] = param._ideas[i];
		i++;
	}
	std::cout << "Brain Copy assignment operator called" << std::endl;
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain Destructor called" << std::endl;
	return ;
}
