#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

AForm::AForm(void) : _name("Default Name")
{
	std::cout << "AForm Default Constructor called" << std::endl;
	this->_is_signed = 0;
	this->_grade_to_sign = 1;
	this->_grade_to_exec = 1;
	return ;
}

AForm::AForm(std::string name, int grade_to_sign, int grade_to_exec) : _name(name)
{
	std::cout << "AForm Constructor called" << std::endl;
	checkGrade(grade_to_sign);
	checkGrade(grade_to_exec);
	this->_is_signed = 0;
	this->_grade_to_sign = grade_to_sign;
	this->_grade_to_exec = grade_to_exec;
	return ;
}

AForm::AForm(const AForm &param) : _name(param._name)
{
	this->_is_signed = param._is_signed;
	this->_grade_to_sign = param._grade_to_sign;
	this->_grade_to_exec = param._grade_to_exec;
	std::cout << "AForm Copy Constructor called" << std::endl;
	return ;
}

AForm &AForm::operator=(const AForm &param)
{
	this->_is_signed = param._is_signed;
	this->_grade_to_sign = param._grade_to_sign;
	this->_grade_to_exec = param._grade_to_exec;
	std::cout << "AForm Copy assignment operator called called" << std::endl;
	return (*this);
}

AForm::~AForm(void)
{
	std::cout << "AForm Destructor called" << std::endl;
	return ;
}
std::string AForm::getName(void) const
{
	return (this->_name);
}

bool AForm::get_is_signed(void) const
{
	return (this->_is_signed);
}

int AForm::get_grade_to_sign(void) const
{
	return (this->_grade_to_sign);
}

int AForm::get_grade_to_exec(void) const
{
	return (this->_grade_to_exec);
}

void AForm::beSigned(Bureaucrat &param)
{
	if (param.getGrade() <= this->_grade_to_sign)
		this->_is_signed = 1;
	else
		throw (AForm::GradeTooLowException());
}

void AForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->_grade_to_exec)
		throw (AForm::GradeTooLowException());
	if (this->_is_signed == 0)
		throw (AForm::FormNotSignedException());
	this->executeAction();
	return ;
}

std::ostream &operator<<(std::ostream& os, const AForm &param)
{
	std::cout << param.getName() << ". Is signed: " << param.get_is_signed()
		<< ". Required grade to sign: "
		<< param.get_grade_to_sign() << ". Required grade to execute: "
		<< param.get_grade_to_exec() << "." << std::endl;
	return (os);
}

void AForm::checkGrade(int grade)
{
	if (grade > LOWEST_GRADE)
		throw (AForm::GradeTooLowException());
	if (grade < MAX_GRADE)
		throw (AForm::GradeTooHighException());
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char* AForm::FormNotSignedException::what() const throw()
{
	return ("Form not signed.");
}
