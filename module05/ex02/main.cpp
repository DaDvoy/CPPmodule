#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void){
	// {
	// 	std::cout<< GRAY "------------------------------" STOP<<std::endl;
	// 	Bureaucrat	smt("Bad bureaucrat", 33);
	// 	Form		forSmt("financing", 1, 1);
	// 	Form		otherSmt("Increase salary to a bureaucrat", 150, 150);

	// 	std::cout<<smt<<std::endl;

	// 	std::cout << smt;
	// 	smt.signForm(forSmt);
	// 	std::cout << std::endl;

	// 	try {
	// 		for (int i = 0; i < 31; i++)
	// 			smt.incrementGrade();
	// 		std::cout << LIGHT_BLUE "Bad bureaucrat" << YELLOW " received a bribe!" STOP << std::endl;
	// 	}
	// 	catch (std::exception& ex){
	// 		std::cerr << RED "Error: " STOP << ex.what() << std::endl;
	// 	}
		
	// 	std::cout << smt;
	// 	smt.signForm(otherSmt);
	// 	std::cout << std::endl;

	// }
	// {
	// 	std::cout<< GRAY "----------------------------------------" STOP <<std::endl;
	// 	try{
	// 		Bureaucrat Ant("Ant", -1);
	// 	}
	// 	catch(std::exception& ex){
	// 		std::cerr << RED "Error: " STOP << ex.what() << std::endl;
	// 	}
		
	// 	try{

	// 		Bureaucrat Ant("Ant", 151);
	// 	}
	// 	catch(std::exception& ex){
	// 		std::cerr << RED "Error: " STOP << ex.what() << std::endl;
	// 	}
	// }
	ShrubberyCreationForm t1("It's not meant to be");
	RobotomyRequestForm t2("Maybe");
	PresidentialPardonForm t3("Probably");
	Bureaucrat b1("John", 5);

	try
	{
		b1.executeForm(t1);
		b1.executeForm(t2);
		b1.executeForm(t3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	// ShrubberyCreationForm	a1("tree.txt");
	// RobotomyRequestForm		a2("Carl");
	// PresidentialPardonForm	a3("ME");

	// Bureaucrat 				b1("Albert De Salvo", 150);
	// Bureaucrat 				b2("James Olmos Cunningham", 140);
	// Bureaucrat 				b3("Evan Redgrave", 100);
	// Bureaucrat 				b4("Pete Fergusson", 60);
	// Bureaucrat 				b5("Peter Dong", 30);
	// Bureaucrat 				b6("Rose Everdeen", 10);
	// Bureaucrat 				b7("Leader", 1);

	// std::cout << "__________________________________" << std::endl;
	// std::cout << "______________Print_______________" << std::endl;
	// std::cout << "__________________________________" << std::endl;
	// std::cout << a1 << std::endl << a2 << std::endl << a3 << std::endl;
	// std::cout << b1 << std::endl << b2 << std::endl << b3 << std::endl
	// << b4 << std::endl << b5 << std::endl << b6 << std::endl << b7 << std::endl;
	// std::cout << "__________________________________" << std::endl;
	// std::cout << "________ShrubberyCreationForm_____" << std::endl;
	// std::cout << "__________________________________" << std::endl;
	// b1.signForm(a1);
	// b1.executeForm(a1);
	// b2.signForm(a1);
	// b2.executeForm(a1);
	// b3.signForm(a1);
	// b3.executeForm(a1);
	// std::cout << "__________________________________" << std::endl;
	// std::cout << "______RobotomyRequestForm_________" << std::endl;
	// std::cout << "__________________________________" << std::endl;
	// b3.signForm(a2);
	// b3.executeForm(a2);
	// b4.signForm(a2);
	// b4.executeForm(a2);
	// b5.signForm(a2);
	// b5.executeForm(a2);
	// std::cout << "__________________________________" << std::endl;
	// std::cout << "______PresidentialPardonForm______" << std::endl;
	// std::cout << "__________________________________" << std::endl;
	// b5.signForm(a3);
	// b5.executeForm(a3);
	// b6.signForm(a3);
	// b6.executeForm(a3);
	// b7.signForm(a3);
	// b7.executeForm(a3);
	// std::cout << "__________________________________" << std::endl;
	// std::cout << "______________del_________________" << std::endl;
	// std::cout << "__________________________________" << std::endl;

	return (0);
}