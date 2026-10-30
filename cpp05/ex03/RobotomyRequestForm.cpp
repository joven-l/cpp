#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("RobotomyRequestForm", 72, 45)
{
	std::cout << "RobotomyRequestForm Default Constructor called" << std::endl;
	this->_target = "Default target";
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
	std::cout << "RobotomyRequestForm Constructor called" << std::endl;
	this->_target = target;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &param) : AForm(param)
{
	this->_target = param._target;
	std::cout << "RobotomyRequestForm Copy Constructor called" << std::endl;
	return ;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &param)
{
	AForm::operator=(param);
	this->_target = param._target;
	std::cout << "RobotomyRequestForm Copy assignment operator called called" << std::endl;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "RobotomyRequestForm Destructor called" << std::endl;
	return ;
}

void RobotomyRequestForm::executeAction(void) const
{
	std::cout << "*DRILLING NOISE*" << std::endl;
	if (rand() % 2)
	{
		std::cout << this->_target << " has been robotomized successfully." << std::endl;
	}
	else
	{
		std::cout << this->_target << " has failed to be robotomized." << std::endl;
	}
	return ;
}