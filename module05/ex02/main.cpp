#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void) {
	std::cout<< GRAY "------------------------------" STOP<<std::endl;

	ShrubberyCreationForm	a1("Nth");
	RobotomyRequestForm		a2("Ant");
	PresidentialPardonForm	a3("Smt");

	Bureaucrat 				b1("Good bureaucrat", 150);
	Bureaucrat 				b2("Bad bureaucrat", 140);
	Bureaucrat 				b3("Stupid  bureaucrat", 100);

	
	std::cout << a1 << std::endl << a2 << std::endl << a3 << std::endl;
	std::cout << b1 << std::endl << b2 << std::endl << b3 << std::endl;
	
	std::cout<< GRAY "------------------------------" STOP<<std::endl;
	
	b1.signForm(a1);
	b1.executeForm(a1);
	b2.signForm(a1);
	b2.executeForm(a1);
	b3.signForm(a1);
	b3.executeForm(a1);
	
	b3.signForm(a2);
	b3.executeForm(a2);

	return (0);
}