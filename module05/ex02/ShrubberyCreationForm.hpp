#ifndef SHRUBERRYCREATIONFORM_HPP
# define SHRUBERRYCREATIONFORM_HPP

#include <iostream>
#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
public:
	ShrubberyCreationForm(std::string _name);
	ShrubberyCreationForm(const ShrubberyCreationForm &shrub);
	~ShrubberyCreationForm();

	void	execute(Bureaucrat const & executor) const;
};

#endif
