#include "Bureaucrat.hpp"

int main(void){
	{
		std::cout<< GRAY "------------------------------" STOP<<std::endl;
		Bureaucrat smt("Good bureaucrat", 33);

		std::cout<<smt<<std::endl;
		try {
            smt.incrementGrade();
        }
		catch (std::exception& e)
        {
            std::cerr << RED "Error: " STOP << e.what() << std::endl;
        }
        std::cout<<smt<<std::endl;

		try {
            smt.incrementGrade();
        }
		catch (std::exception& e) {
            std::cerr << RED "Error: " STOP << e.what() << std::endl;
        }
        std::cout<<smt<<std::endl;

		try {
            for (int i = 0; i < 31; i++)
                smt.incrementGrade();
        }
		catch (std::exception& e){
            std::cerr << RED "Error: " STOP << e.what() << std::endl;
        }
		
        std::cout<<smt<<std::endl;
	}
	{
		std::cout<< GRAY "----------------------------------------" STOP <<std::endl;
		Bureaucrat Nth("Bad bureacrat", 140);

		std::cout<<Nth<<std::endl;
		try {
            Nth.decrementGrade();
        }
		catch (std::exception& e){
            std::cerr << RED "Error: " STOP << e.what() << std::endl;
        }
        std::cout<<Nth<<std::endl;
		try {
            for (int i = 0; i < 10; i++)
                Nth.decrementGrade();
        }
		catch (std::exception& e){
            std::cerr << RED "Error: " STOP << e.what() << std::endl;
        }

		std::cout<<Nth<<std::endl;
	}
	{
		std::cout<< GRAY "----------------------------------------" STOP <<std::endl;
		try{
			Bureaucrat Ant("Ant", -1);
		}
		catch(std::exception& e){
            std::cerr << RED "Error: " STOP << e.what() << std::endl;
        }
		
        try{

			Bureaucrat Ant("Ant", 151);
		}
		catch(std::exception& e){
            std::cerr << RED "Error: " STOP << e.what() << std::endl;
        }
	}
	return (0);
}