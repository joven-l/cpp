#ifndef AFORM_HPP
# define AFORM_HPP

#include <string>
#include <exception>

class Bureaucrat;

#define MAX_GRADE 1
#define LOWEST_GRADE 150

class AForm
{
private:
	const std::string	_name;
	bool				_is_signed;
	int					_grade_to_sign;
	int					_grade_to_exec;
	static void checkGrade(int grade);
	virtual void executeAction(void) const = 0;

public:
	AForm(void);
	AForm(std::string name, int grade_to_sign, int grade_to_exec);
	AForm(const AForm &param);
	AForm &operator=(const AForm &param);
	~AForm(void);

	std::string getName(void) const;;
	bool get_is_signed(void) const;
	int get_grade_to_sign(void) const;
	int get_grade_to_exec(void) const;
	void beSigned(Bureaucrat &param);
	void execute(Bureaucrat const & executor) const;
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
	class FormNotSignedException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
};

std::ostream &operator<<(std::ostream& os, const AForm &param);

#endif