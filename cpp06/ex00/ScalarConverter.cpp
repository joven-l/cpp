#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void)
{
	std::cout << "ScalarConverter Default Constructor called" << std::endl;
	return ;
}

ScalarConverter::ScalarConverter(const ScalarConverter &param)
{
	(void) param;
	std::cout << "ScalarConverter Copy Constructor called" << std::endl;
	return ;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &param)
{
	(void) param;
	std::cout << "ScalarConverter Copy assignment operator called called" << std::endl;
	return (*this);
}

ScalarConverter::~ScalarConverter(void)
{
	std::cout << "ScalarConverter Destructor called" << std::endl;
	return ;
}

bool handle_literals(const 	std::string &param);
Type find_type(const std::string &param);
void convert_char(const std::string &param);
void convert_int(const std::string &param);
void convert_float(const std::string &param);
void convert_double(const std::string &param);

void ScalarConverter::convert(const std::string &param)
{
	if (handle_literals(param) == true)
		return ;
	Type type = find_type(param);
	switch (type)
	{
		case CHAR:
			convert_char(param);
			break;
		case INT:
			convert_int(param);
			break;
		case FLOAT:
			convert_float(param);
			break;
		case DOUBLE:
			convert_double(param);
			break;
		case INVALID:
			std::cout << "Every type conversion is impossible\n";
			std::cout << "char: impossible\nint: impossible\nfloat: impossible\ndouble: impossible\n";
			break ;
	}
}
