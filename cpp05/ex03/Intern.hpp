#ifndef INTERN_HPP
# define INTERN_HPP

#include <string>

class Intern
{
public:
	Intern(void);
	Intern(std::string name, int grade);
	Intern(const Intern &param);
	Intern &operator=(const Intern &param);
	~Intern(void);

	AForm *makeForm(void);
};

#endif