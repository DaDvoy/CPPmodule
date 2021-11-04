#include "Bureaucrat.hpp"

int main(void){
	{
		std::cout<< GRAY "------------------------------" STOP<<std::endl;
		Bureaucrat	smt("Bad bureaucrat", 33);
		Form		forSmt("financing", 1, 1);
		Form		otherSmt("Increase salary to a bureaucrat", 150, 150);

		std::cout<<smt<<std::endl;

		std::cout << smt;
		smt.signForm(forSmt);
		std::cout << std::endl;

		try {
			for (int i = 0; i < 31; i++)
				smt.incrementGrade();
			std::cout << LIGHT_BLUE "Bad bureaucrat" << YELLOW " received a bribe!" STOP << std::endl;
		}
		catch (std::exception& ex){
			std::cerr << RED "Error: " STOP << ex.what() << std::endl;
		}
		
		std::cout << smt;
		smt.signForm(otherSmt);
		std::cout << std::endl;

	}
	{
		std::cout<< GRAY "----------------------------------------" STOP <<std::endl;
		try{
			Bureaucrat Ant("Ant", -1);
		}
		catch(std::exception& ex){
			std::cerr << RED "Error: " STOP << ex.what() << std::endl;
		}
		
		try{

			Bureaucrat Ant("Ant", 151);
		}
		catch(std::exception& ex){
			std::cerr << RED "Error: " STOP << ex.what() << std::endl;
		}
	}
	return (0);
}