#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

# define RED		"\x1b[31m"
# define GREEN		"\x1b[32m"
# define LIGHT_BLUE	"\x1b[34m"
# define GRAY		"\x1b[90m"
# define YELLOW		"\x1b[33m"
# define PINK		"\x1b[35m"
# define STOP		"\x1b[0m"

class Bureaucrat;

class Form
{
private:
	const std::string  	_name;
	bool				_signed;
	const int			_grRequered;
	const int			_grExecute;
public:
	Form(const std::string form, const int _requered, const int _execute);
	Form(const Form &otherForm);
	virtual ~Form();

	Form &operator=(const Form &copy);

	std::string			getName() const;
	int					getRequered() const;
	int					getExecute() const;
	bool				getSigned() const;
	void				beSigned(Bureaucrat &bur);
	virtual void		execute(Bureaucrat const & executor) const = 0;

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

	class FormNotSigned : public std::exception
	{
	public:
		const char* what() const throw();
	};
};

std::ostream &operator<<(std::ostream &out, const Form &form);

#endif
