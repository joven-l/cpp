#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("ShrubberyCreationForm", 145, 137)
{
	std::cout << "ShrubberyCreationForm Default Constructor called" << std::endl;
	this->_target = "Default target";
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137)
{
	std::cout << "ShrubberyCreationForm Constructor called" << std::endl;
	this->_target = target;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &param) : AForm(param)
{
	this->_target = param._target;
	std::cout << "ShrubberyCreationForm Copy Constructor called" << std::endl;
	return ;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &param)
{
	AForm::operator=(param);
	this->_target = param._target;
	std::cout << "ShrubberyCreationForm Copy assignment operator called called" << std::endl;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "ShrubberyCreationForm Destructor called" << std::endl;
	return ;
}

void ShrubberyCreationForm::executeAction(void) const
{
	std::ofstream file((this->_target + "_shrubbery").c_str());

	if (file.is_open() == false)
	{
		throw (ShrubberyCreationForm::FailedToCreateFileException());
	}
	file << std::endl;
	file << "   ███     ███" << std::endl;
	file << "   ███     ███" << std::endl;
	file << "  █████   █████" << std::endl;
	file << "  █████   █████" << std::endl;
	file << "   | |     | |" << std::endl;
	file << "   | |     | |" << std::endl;
	file << "   | |     | |" << std::endl;
	file << "------------------" << std::endl;
	return ;
}

const char* ShrubberyCreationForm::FailedToCreateFileException::what() const throw()
{
	return ("Failed to create file");
}