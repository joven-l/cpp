#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <string>

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{

private:
	std::string _target;
	virtual void executeAction(void) const;

public:
	ShrubberyCreationForm(void);
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &param);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &param);
	~ShrubberyCreationForm(void);

	class FailedToCreateFileException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
};
#endif