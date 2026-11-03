#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <ostream>
#include <cstdlib>
#include <ctime>

int main()
{
	// functioning tests
	try
	{
		Bureaucrat A("A", 1);
		Intern someRandomIntern;
		AForm* rrf;

		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		A.signForm(*rrf);
		A.executeForm(*rrf);

		std::cout << *rrf;
		delete (rrf);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat A("A", 1);
		Intern someRandomIntern;
		AForm* rrf;

		rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
		A.signForm(*rrf);
		A.executeForm(*rrf);

		std::cout << *rrf;
		delete (rrf);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat A("A", 1);
		Intern someRandomIntern;
		AForm* rrf;

		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		A.signForm(*rrf);
		A.executeForm(*rrf);

		std::cout << *rrf;
		delete (rrf);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	Intern someRandomIntern;

	if (someRandomIntern.makeForm("asd", "Bender") == NULL)
		std::cout << "null rrf" << std::endl;
	std::cout << std::endl;
}