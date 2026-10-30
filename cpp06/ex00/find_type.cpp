#include "ScalarConverter.hpp"

Type find_type(const std::string &param)
{
	if (param.length() == 1 && std::isprint(param[0]) != 0)
		return (CHAR);

	int dot_count = 0;
	int has_sign = 0;
	int	is_float = 0;
	std::string::size_type i;

	if (param[param.length() - 1] == 'f')
		is_float = 1;
	if (param[0] == '-' || param[0] == '+')
	{
		has_sign = 1;
		i = 1;
	}
	else
		i = 0;

	while (i < param.length())
	{
		if (std::isdigit(param[i]) == false)
		{
			if (param[i] == '.')
			{
				if (i - has_sign == 0)
					return (INVALID);
				if (i == param.length() - 1 - is_float)
					return (INVALID);
				dot_count++;
				if (dot_count == 2)
					return (INVALID);
			}
			else if (i == param.length() - 1 && is_float == 1)
				break;
			else
				return (INVALID);
		}
		i++;
	}
	double converted = std::atof(param.c_str());
	if (dot_count == 0 && is_float == 0 && converted <= INT_MAX && converted >= INT_MIN)
		return (INT);
	if (is_float == 1  && converted <= FLT_MAX && converted >= -FLT_MAX)
		return (FLOAT);
	if (is_float != 1 && converted <= DBL_MAX && converted >= -DBL_MAX)
		return (DOUBLE);
	return (INVALID);
}
