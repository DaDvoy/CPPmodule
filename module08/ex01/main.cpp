#include "Span.hpp"

int main()
{
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << GREEN "Shortest is: " LIGHT_BLUE
		<< sp.shortestSpan() << STOP << std::endl;
	std::cout << GREEN "Longest is: " LIGHT_BLUE
			<< sp.longestSpan() << STOP << std::endl;

	std::cout << GRAY "----------------------" STOP << std::endl;

	Span test = Span(10000);
	std::vector<int> vect(10000);
	std::srand(time(0));
	for (std::vector<int>::iterator i = vect.begin(); i != vect.end(); i++) {
		test.addNumber(std::rand());
	}
	std::cout << GREEN "Shortest is: " LIGHT_BLUE
		<< test.shortestSpan() << STOP << std::endl;
	std::cout << GREEN "Longest is: " LIGHT_BLUE
			<< test.longestSpan() << STOP << std::endl;

	std::cout << GRAY "----------------------" STOP << std::endl;

	Span test1 = Span(1);
	test1.addNumber(13);
	try{
		std::cout << GREEN "Shortest is: " LIGHT_BLUE
		<< test1.shortestSpan() << STOP << std::endl;
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}

	std::cout << GRAY "----------------------" STOP << std::endl;

	Span test2 = Span(3);
	test2.addNumber(13);
	test2.addNumber(1);
	test2.addNumber(123);

	try{
		test2.addNumber(6);
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}

}