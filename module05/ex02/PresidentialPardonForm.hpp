#ifndef PRESIDENTPARDONFORM_HPP
#define PRESIDENTPARDONFORM_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class PresidentialPardonForm : public Form
{
public:
	PresidentialPardonForm(std::string _name);
	PresidentialPardonForm(const PresidentialPardonForm &president);
	~PresidentialPardonForm();

	void	execute(Bureaucrat const & executor) const;
};

#endif
