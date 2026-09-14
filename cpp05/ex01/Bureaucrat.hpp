#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <exception>

class Form;

#define MAX_GRADE 1
#define LOWEST_GRADE 150

class Bureaucrat
{
private:
	const std::string	_name;
	int					_grade;
	static void checkGrade(int grade);

public:
	Bureaucrat(void);
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &param);
	Bureaucrat &operator=(const Bureaucrat &param);
	~Bureaucrat(void);

	std::string getName(void) const;
	int getGrade(void) const;
	void incrementGrade(int amount);
	void decrementGrade(int amount);
	void signForm(Form &param);
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

std::ostream &operator<<(std::ostream& os, const Bureaucrat &param);

#endif