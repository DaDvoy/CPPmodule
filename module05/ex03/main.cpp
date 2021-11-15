#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void) {
	Intern	intern;
	Form*	form;
	Bureaucrat	b("Nobody", 71);

	std::cout<< GRAY "------------------------------" STOP<<std::endl;

	try
	{
		form = intern.makeForm("ShrubberyCreationForm", "for nothing");
		b.signForm(*form);
		b.executeForm(*form);
		std::cout << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout<< GRAY "------------------------------" STOP<<std::endl;

	try
	{
		form = intern.makeForm("blabla", "for blabla");
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout<< GRAY "------------------------------" STOP<<std::endl;

	delete form;
	return (0);
}