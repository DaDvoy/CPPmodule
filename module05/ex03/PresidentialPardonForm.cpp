#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string _name) : Form(_name, 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &president) : Form(president) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	Form::execute(executor);
	std::cout << LIGHT_BLUE << this->getName() << STOP
		<<  GREEN " has been pardoned by Zafod Beeblebrox" STOP << std::endl;
}