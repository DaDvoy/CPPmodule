#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) {
	this->_name = name;
	this->_grade = grade;
	if (this->_grade < 1)
		throw GradeTooHighException();
	if (this->_grade > 150)
		throw GradeTooLowException();
	this->_grade = grade;
	std::cout << LIGHT_BLUE << this->_name << STOP << GREEN << " was created with " << STOP
		<< YELLOW << this->_grade << STOP << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copyBur) {
	this->operator= (copyBur);
}

Bureaucrat::~Bureaucrat() {
	std::cout << RED << this->_name << " left..." STOP << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other) {
	this->_name = other.getName();
	this->_grade = other.getGrade();
	return (*this);
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &another) {
	out << LIGHT_BLUE << another.getName() << STOP
		<< GREEN " has " STOP << YELLOW
		<< another.getGrade() << STOP << std::endl;
	return (out);
}

std::string	Bureaucrat::getName() const {
	return (this->_name);
}

int			Bureaucrat::getGrade() const {
	return (this->_grade);
}

void		Bureaucrat::incrementGrade() {
	if (this->_grade == 1)
		throw GradeTooHighException();
	this->_grade--;
}

void		Bureaucrat::decrementGrade() {
	if (this->_grade == 150)
		throw GradeTooLowException();
	this->_grade++;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return (PINK "Grade too high" STOP);
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return (PINK "Grade too low" STOP);
}
