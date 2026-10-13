#include "ScalarConverter.hpp"
#include <iostream>

ScalarConverter::ScalarConverter(void)
{
	std::cout << "ScalarConverter Default Constructor called" << std::endl;
	return ;
}

ScalarConverter::ScalarConverter()
{
	std::cout << "ScalarConverter Constructor called" << std::endl;
	return ;
}

ScalarConverter::ScalarConverter(const ScalarConverter &param)
{
	std::cout << "ScalarConverter Copy Constructor called" << std::endl;
	return ;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &param)
{
	std::cout << "ScalarConverter Copy assignment operator called called" << std::endl;
	return (*this);
}

ScalarConverter::~ScalarConverter(void)
{
	std::cout << "ScalarConverter Destructor called" << std::endl;
	return ;
}
