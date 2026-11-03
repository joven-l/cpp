#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

Intern::Intern(void)
{
	std::cout << "Intern Default Constructor called" << std::endl;
	return ;
}

Intern::Intern(const Intern &param)
{
	(void) param;
	std::cout << "Intern Copy Constructor called" << std::endl;
	return ;
}

Intern &Intern::operator=(const Intern &param)
{
	(void) param;
	std::cout << "Intern Copy assignment operator called called" << std::endl;
	return (*this);
}

Intern::~Intern(void)
{
	std::cout << "Intern Destructor called" << std::endl;
	return ;
}

AForm *Intern::makeForm(const std::string form_name, const::std::string target)
{
	std::string levels[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};

	int i = 0;
	while (i < 3)
	{
		if (form_name.compare(levels[i]) == 0)
		{
			break ;
		}
		i++;
	}
	switch (i)
	{
		case 0:
		{
			return (new RobotomyRequestForm(target));
		}
		case 1:
		{
			return (new PresidentialPardonForm(target));
		}
		case 2:
		{
			return (new ShrubberyCreationForm(target));
		}
	}
	std::cout << "Invalid form name" << std::endl;
	return (NULL);
}
