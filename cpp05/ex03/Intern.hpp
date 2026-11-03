#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"
#include <string>

class Intern
{
public:
	Intern(void);
	Intern(std::string name, int grade);
	Intern(const Intern &param);
	Intern &operator=(const Intern &param);
	~Intern(void);

	AForm *makeForm(const std::string form_name, const::std::string target);
};
#endif