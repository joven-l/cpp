#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

Bureaucrat::Bureaucrat(void) : _name("Default Name")
{
	std::cout << "Bureaucrat Default Constructor called" << std::endl;
	this->_grade = 150;
	return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	std::cout << "Bureaucrat Constructor called" << std::endl;
	this->checkGrade(grade);
	this->_grade = grade;
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &param) : _name(param._name)
{
	this->_grade = param._grade;
	std::cout << "Bureaucrat Copy Constructor called" << std::endl;
	return ;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &param)
{
	this->_grade = param._grade;
	std::cout << "Bureaucrat Copy assignment operator called called" << std::endl;
	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat Destructor called" << std::endl;
	return ;
}
std::string Bureaucrat::getName(void) const
{
	return (this->_name);
}

int Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void Bureaucrat::incrementGrade(int amount)
{
	this->checkGrade(this->_grade - amount);
	this->_grade -= amount;
	return ;
}

void Bureaucrat::decrementGrade(int amount)
{
	this->checkGrade(this->_grade + amount);
	this->_grade += amount;
	return ;
}

void Bureaucrat::signForm(Form &param)
{
	try
	{
		param.beSigned(*this);
	}
	catch (std::exception & e)
	{
		std::cout << this->_name << " couldn't sign " << param.getName()
			<< " because " << e.what() << "." << std::endl;
		return ;
	}
	std::cout << this->_name << " signed " << param.getName() << std::endl;
	return ;
}

std::ostream &operator<<(std::ostream& os, const Bureaucrat &param)
{
	std::cout << param.getName() << ", bureaucrat grade "
		<< param.getGrade() << "." << std::endl;
	return (os);
}

void Bureaucrat::checkGrade(int grade)
{
	if (grade > LOWEST_GRADE)
		throw (Bureaucrat::GradeTooLowException());
	if (grade < MAX_GRADE)
		throw (Bureaucrat::GradeTooHighException());
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}