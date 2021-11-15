#include "Intern.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Form *Intern::Shrubbery(std::string &_target) {
	return(new ShrubberyCreationForm(_target));
}

Form *Intern::Robotomy(std::string &_target) {
	return(new RobotomyRequestForm(_target));
}

Form *Intern::Presidential(std::string &_target) {
	return(new PresidentialPardonForm(_target));
}

Form *Intern::makeForm(std::string _name, std::string _target) {
	std::string		_forms[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	fctPtr			_arrForm[3] = {&Intern::Shrubbery, &Intern::Robotomy, &Intern::Presidential};

	for (int i = 0; i < 3; i++) {
		if (_name == _forms[i]) {
			std::cout << GREEN "Intern creates " << YELLOW
				<< _name << STOP << std::endl;
			return (this->*_arrForm[i])(_target);
		}
	}
	throw FormNotFound();
}

const char* Intern::FormNotFound::what() const throw() {
	return (PINK "Form not found" STOP);
}