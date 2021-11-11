#include "Base.hpp"

int		main() {
	Base *smt = generate();

	std::cout << YELLOW "Identify first: " STOP;
	identify(smt);
	std::cout << GRAY "---------------------" STOP << std::endl;
	std::cout << YELLOW "Identify second: " STOP;
	identify(*smt);
	std::cout << GRAY "---------------------" STOP << std::endl;

	B b;
	std::cout << YELLOW "Identify first: " STOP;
	identify(b);
	std::cout << GRAY "---------------------" STOP << std::endl;
	std::cout << YELLOW "Identify second: " STOP;
	identify(&b);
	std::cout << GRAY "---------------------" STOP << std::endl;

	delete smt;
}