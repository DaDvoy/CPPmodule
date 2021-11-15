#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

# define RED		"\x1b[31m"
# define GREEN		"\x1b[32m"
# define LIGHT_BLUE	"\x1b[34m"
# define GRAY		"\x1b[90m"
# define YELLOW		"\x1b[33m"
# define PINK		"\x1b[35m"
# define STOP		"\x1b[0m"

class Intern
{
private:
	Form *Shrubbery(std::string &_target);
	Form *Robotomy(std::string &_target);
	Form *Presidential(std::string &_target);
public:
	Intern();
	~Intern();

	Form	*makeForm(std::string _name, std::string _target);

	class FormNotFound : public std::exception 
	{
	public:
		const char* what() const throw();
	};
};

typedef Form* (Intern::*fctPtr)(std::string &);

#endif
