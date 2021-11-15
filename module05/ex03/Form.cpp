#include "Form.hpp"

Form::Form(const std::string form, const int _requered, const int _execute) :
				_name(form), _grRequered(_requered), _grExecute(_execute) {
	this->_signed = false;
	if (_requered > 150 || _execute > 150)
		throw GradeTooLowException();
	if (_requered < 1 || _execute < 1)
		throw GradeTooHighException();
}

Form::Form(const Form &otherForm) :
	_name(otherForm.getName()), _grRequered(otherForm.getRequered()), _grExecute(otherForm.getExecute()), _signed(otherForm.getSigned()) {}

Form::~Form() {}

Form &Form::operator=(const Form &copy) {
	(void)copy;
	return (*this);
}

std::string Form::getName() const {
	return (this->_name);
}

int			Form::getRequered() const {
	return (this->_grRequered);
}

int			Form::getExecute() const {
	return (this->_grExecute);
}

bool		Form::getSigned() const {
	return (this->_signed);
}

void		Form::beSigned(Bureaucrat &bur) {
	if (bur.getGrade() <= this->_grRequered)
		this->_signed = true;
	else
		throw GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw() {
	return (PINK "Grade too high" STOP);
}

const char* Form::GradeTooLowException::what() const throw() {
	return (PINK "Grade too low" STOP);
}

const char* Form::FormNotSigned::what() const throw() {
	return (PINK "Form is not signed" STOP);
}

std::ostream &operator<<(std::ostream &out, const Form &form) {
	out << LIGHT_BLUE << form.getName() << STOP
		<< GREEN " has grade for requered: " STOP
		<< YELLOW << form.getRequered() << STOP
		<< GREEN " and grade for execute: " STOP
		<< YELLOW << form.getExecute() << STOP << std::endl;
	return (out);
}

void	Form::execute(Bureaucrat const & executor) const {
	if (!_signed)
		throw FormNotSigned();
	if (executor.getGrade() >_grExecute)
		throw GradeTooLowException();
}