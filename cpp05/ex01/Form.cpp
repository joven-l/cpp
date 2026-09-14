#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

Form::Form(void) : _name("Default Name")
{
	std::cout << "Form Default Constructor called" << std::endl;
	this->_is_signed = 0;
	this->_grade_to_sign = 1;
	this->_grade_to_exec = 1;
	return ;
}

Form::Form(std::string name, int grade_to_sign, int grade_to_exec) : _name(name)
{
	std::cout << "Form Constructor called" << std::endl;
	checkGrade(grade_to_sign);
	checkGrade(grade_to_exec);
	this->_is_signed = 0;
	this->_grade_to_sign = grade_to_sign;
	this->_grade_to_exec = grade_to_exec;
	return ;
}

Form::Form(const Form &param) : _name(param._name)
{
	this->_is_signed = param._is_signed;
	this->_grade_to_sign = param._grade_to_sign;
	this->_grade_to_exec = param._grade_to_exec;
	std::cout << "Form Copy Constructor called" << std::endl;
	return ;
}

Form &Form::operator=(const Form &param)
{
	this->_is_signed = param._is_signed;
	this->_grade_to_sign = param._grade_to_sign;
	this->_grade_to_exec = param._grade_to_exec;
	std::cout << "Form Copy assignment operator called called" << std::endl;
	return (*this);
}

Form::~Form(void)
{
	std::cout << "Form Destructor called" << std::endl;
	return ;
}
std::string Form::getName(void) const
{
	return (this->_name);
}

bool Form::get_is_signed(void) const
{
	return (this->_is_signed);
}

int Form::get_grade_to_sign(void) const
{
	return (this->_grade_to_sign);
}

int Form::get_grade_to_exec(void) const
{
	return (this->_grade_to_exec);
}

void Form::beSigned(Bureaucrat &param)
{
	if (param.getGrade() <= this->_grade_to_sign)
		this->_is_signed = 1;
	else
		throw (Form::GradeTooLowException());
}
std::ostream &operator<<(std::ostream& os, const Form &param)
{
	std::cout << param.getName() << ". Is signed: " << param.get_is_signed()
		<< ". Required grade to sign: "
		<< param.get_grade_to_sign() << ". Required grade to execute: "
		<< param.get_grade_to_exec() << "." << std::endl;
	return (os);
}

void Form::checkGrade(int grade)
{
	if (grade > LOWEST_GRADE)
		throw (Form::GradeTooLowException());
	if (grade < MAX_GRADE)
		throw (Form::GradeTooHighException());
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}
