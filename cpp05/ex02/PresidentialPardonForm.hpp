#ifndef PRESIDENTIALPARDONFOR_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <string>

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{

private:
	std::string _target;
	virtual void executeAction(void) const;

public:
	PresidentialPardonForm(void);
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &param);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &param);
	~PresidentialPardonForm(void);
};
#endif