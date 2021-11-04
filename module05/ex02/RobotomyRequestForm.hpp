#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
public:
	RobotomyRequestForm(std::string _name);
	RobotomyRequestForm(const RobotomyRequestForm &robot);
	~RobotomyRequestForm();

	void execute(Bureaucrat const & executor) const;
};

#endif
