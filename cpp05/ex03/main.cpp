#include "Bureaucrat.hpp"
#include "AForm.hpp"
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
		Bureaucrat A("A", 3);
		ShrubberyCreationForm ShrubFormA("ShrubFormA");

		A.signForm(ShrubFormA);
		A.executeForm(ShrubFormA);

		std::cout << ShrubFormA;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		srand(time(NULL));
		Bureaucrat A("A", 3);
		RobotomyRequestForm RobotomyFormA("RobotomyFormA");

		A.signForm(RobotomyFormA);
		A.executeForm(RobotomyFormA);

		std::cout << RobotomyFormA;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat A("A", 3);
		PresidentialPardonForm PresidentialPardonFormA("PresidentialPardonFormA");

		A.signForm(PresidentialPardonFormA);
		A.executeForm(PresidentialPardonFormA);

		std::cout << PresidentialPardonFormA;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	// failing tests
	try
	{
		Bureaucrat A("A", 144);
		ShrubberyCreationForm ShrubFormA("ShrubFormA");

		A.signForm(ShrubFormA);
		A.executeForm(ShrubFormA);

		std::cout << ShrubFormA;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		srand(time(NULL));
		Bureaucrat A("A", 71);
		RobotomyRequestForm RobotomyFormA("RobotomyFormA");

		A.signForm(RobotomyFormA);
		A.executeForm(RobotomyFormA);

		std::cout << RobotomyFormA;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat A("A", 24);
		PresidentialPardonForm PresidentialPardonFormA("PresidentialPardonFormA");

		A.signForm(PresidentialPardonFormA);
		A.executeForm(PresidentialPardonFormA);

		std::cout << PresidentialPardonFormA;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
}