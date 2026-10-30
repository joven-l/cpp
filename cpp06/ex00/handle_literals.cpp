#include "ScalarConverter.hpp"

bool handle_literals(const std::string &param)
{
	if (param.compare("-inff") == 0 || param.compare("+inff") == 0 || param.compare("nanf") == 0)
	{
		std::cout << "char: impossible\nint: impossible\n";
		std::cout << "float: " << param << std::endl;
		std::cout << "double: " << param.substr(0, param.length() - 1) << std::endl;
		return (true);
	}
	else if (param.compare("-inf") == 0 || param.compare("+inf") == 0 || param.compare("nan") == 0)
	{
		std::cout << "char: impossible\nint: impossible\n";
		std::cout << "float: " << param << "f" << std::endl;
		std::cout << "double: " << param << std::endl;
		return (true);
	}
	return (false);
}