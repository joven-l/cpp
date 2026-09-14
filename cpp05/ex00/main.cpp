#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
	// too high grade
	try
	{
		Bureaucrat a("a", 0);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	// too low grade
	try
	{
		Bureaucrat b("b", 151);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	// increment/decrement test
	{
		Bureaucrat a("a", 1);
		std::cout << a;

		a.decrementGrade(2);
		std::cout << a;
		a.incrementGrade(1);
		std::cout << a;
	}
	std::cout << std::endl;
	// decrement to out of range
	try
	{
		Bureaucrat d("d", 150);
		std::cout << d;

		d.decrementGrade(1);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	// increment to out of range
	try
	{
		Bureaucrat c("c", 1);
		std::cout << c;

		c.incrementGrade(1);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	// increment to out of range with negative numbers
	try
	{
		Bureaucrat d("d", 150);
		std::cout << d;

		d.incrementGrade(-1);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	// decrement to out of range with negative numbers
	try
	{
		Bureaucrat c("c", 1);
		std::cout << c;

		c.decrementGrade(-1);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}