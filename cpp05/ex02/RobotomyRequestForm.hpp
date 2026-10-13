#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <string>

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{

private:
	std::string _target;
	virtual void executeAction(void) const;

public:
	RobotomyRequestForm(void);
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &param);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &param);
	~RobotomyRequestForm(void);
};
#endif