#include "ScalarConverter.hpp"

void convert_char(const std::string &param)
{
	char converted = static_cast<char>(param[0]);

	std::cout << "char: '" << converted << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(converted) << std::endl;
	std::cout << "float: " << static_cast<float>(converted) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(converted) << ".0"  << std::endl;
}

void convert_int(const std::string &param)
{
	int converted = static_cast<int>(std::atoi(param.c_str()));

	if (converted < 0 || converted > 127)
		std::cout << "char: impossible" << std::endl;
	else if (std::isprint(converted) == 0)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(converted) << "'" << std::endl;

	std::cout << "int: " << converted << std::endl;

	std::cout << "float: " << static_cast<float>(converted) << ".0f" << std::endl;

	std::cout << "double: " << static_cast<double>(converted) << ".0"  << std::endl;
}

void convert_float(const std::string &param)
{
	float converted = static_cast<float>(std::atof(param.c_str()));

	if (converted < 0 || converted > 127)
		std::cout << "char: impossible" << std::endl;
	else if (std::isprint(converted) == 0)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(converted) << "'" << std::endl;

	if (converted > INT_MAX || converted < INT_MIN)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(converted) << std::endl;
	
	std::cout << "float: " << converted;
	if (converted - std::floor(converted) == 0)
		std::cout << ".0";
	std::cout << "f" << std::endl;

	std::cout << "double: " << static_cast<double>(converted);
	if (converted - std::floor(converted) == 0)
		std::cout << ".0";
	std::cout << std::endl;
}

void convert_double(const std::string &param)
{
	double converted = static_cast<double>(std::atof(param.c_str()));

	if (converted < 0 || converted > 127)
		std::cout << "char: impossible" << std::endl;
	else if (std::isprint(converted) == 0)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(converted) << "'" << std::endl;

	if (converted > INT_MAX || converted < INT_MIN)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(converted) << std::endl;

	if (converted > FLT_MAX || converted < -FLT_MAX)
		std::cout << "float: impossible" << std::endl;
	else
	{
		std::cout << "float: " << static_cast<float>(converted);
		if (converted - std::floor(converted) == 0)
		std::cout << ".0";
		std::cout << "f" << std::endl;
	}

	std::cout << "double: " << converted;
	if (converted - std::floor(converted) == 0)
		std::cout << ".0";
	std::cout << std::endl;
}
