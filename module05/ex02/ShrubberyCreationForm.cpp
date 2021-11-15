#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string _name) : Form(_name, 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &shrub) : Form(shrub) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	Form::execute(executor);
	std::ofstream _file(getName() + "_shrubbery");
	_file		<<	"░░░░░░░░░░░░▄██▄░░░░░░░░░░░░" << std::endl
				<< "░░░░░░░░░░▄██████▄░░░░░░░░░░" << std::endl
				<< "░░░░░░░░▄████░█████▄░░░░░░░░" << std::endl
				<< "░░░░░░▄█████████░████░░░░░░░" << std::endl
				<< "░░░░░░░░░▄██░█████▄░░░░░░░░░" << std::endl
				<< "░░░░░░░▄████████████▄░░░░░░░" << std::endl
				<< "░░░░░▄███░███████░████▄░░░░░" << std::endl
				<< "░░░▄████████░███████████▄░░░" << std::endl
				<< "░░░░░░▄█████████░████▄░░░░░░" << std::endl
				<< "░░░░▄████░█████████░███▄░░░░" << std::endl
				<< "░░▄██████████░███████████▄░░" << std::endl
				<< "▄█████░█████████████░██████▄" << std::endl
				<< "▀▀▀▀▀▀▀▀▀▀▀▀████▀▀▀▀▀▀▀▀▀▀▀▀" << std::endl
				<< "░░░░░░░░░░░░████░░░░░░░░░░░░" << std::endl
				<< "░░░░░░░░░░░░░░░░░░░░░░░░░░░░" << std::endl
				<< "░░█▀▀▀█░█▀▀▀▀█░█▀▀▀█░██▀██░░" << std::endl
				<< "░░█▄█░█░█░██░█░█▄█░█░█▄░██░░" << std::endl
				<< "░░█░▄██░█░██░█░█░▄██░██░██░░" << std::endl
				<< "░░█▄▄▄█░█▄▄▄▄█░█▄▄▄█░█▄▄▄█░░" << std::endl
				<< "░░░░░░░░░░░░░░░░░░░░░░░░░░░░" << std::endl;
}