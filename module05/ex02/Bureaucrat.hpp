#ifndef BUREUCRAT_HPP
# define BUREUCRAT_HPP

#include <iostream>
#include "Form.hpp"

# define RED		"\x1b[31m"
# define GREEN		"\x1b[32m"
# define LIGHT_BLUE	"\x1b[34m"
# define GRAY		"\x1b[90m"
# define YELLOW		"\x1b[33m"
# define PINK		"\x1b[35m"
# define STOP		"\x1b[0m"

class Form;

class Bureaucrat
{
private:
	std::string 	_name;
	int				_grade;
public:
	Bureaucrat(std::string  name, int grade);
	Bureaucrat(const Bureaucrat &copyBur);
	~Bureaucrat();

	Bureaucrat &operator=(const Bureaucrat &other);

	std::string			getName() const;
	int					getGrade() const;

	void				incrementGrade();
	void				decrementGrade();

	void				signForm(Form &form);

	void				executeForm(Form const & form);

	class GradeTooHighException : public std::exception
	{
	public:
		const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
	public:
		const char* what() const throw();
	};
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &another);

#endif
