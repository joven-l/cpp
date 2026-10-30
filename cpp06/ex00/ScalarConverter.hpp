#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <string>
#include <iostream>
#include <cstdlib>
#include <cfloat>
#include <climits>
#include <cmath>

enum Type
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	INVALID
};

class ScalarConverter
{
private:
	ScalarConverter(void);
	ScalarConverter(const ScalarConverter &param);
	ScalarConverter &operator=(const ScalarConverter &param);
	~ScalarConverter(void);
public:
	static void convert(const std::string &param);
	
};

#endif