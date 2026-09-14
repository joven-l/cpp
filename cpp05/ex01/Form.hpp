#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include <exception>

class Bureaucrat;

#define MAX_GRADE 1
#define LOWEST_GRADE 150

class Form
{
private:
	const std::string	_name;
	bool				_is_signed;
	int					_grade_to_sign;
	int					_grade_to_exec;
	static void checkGrade(int grade);

public:
	Form(void);
	Form(std::string name, int grade_to_sign, int grade_to_exec);
	Form(const Form &param);
	Form &operator=(const Form &param);
	~Form(void);

	std::string getName(void) const;;
	bool get_is_signed(void) const;
	int get_grade_to_sign(void) const;
	int get_grade_to_exec(void) const;
	void beSigned(Bureaucrat &param);
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
};

std::ostream &operator<<(std::ostream& os, const Form &param);

#endif