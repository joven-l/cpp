#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main()
{
	// signForm tests
	try
	{
		Bureaucrat A("A", 1);
		Form FormA("FormA", 1, 1);

		A.signForm(FormA);

		Bureaucrat B("B", 2);
		B.signForm(FormA);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
}