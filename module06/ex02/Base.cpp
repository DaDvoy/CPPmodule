#include "Base.hpp"

Base::~Base() {}
A::~A() {}
B::~B() {}
C::~C() {}

static int		getRandomNumberMain(void)
{
	int			random;
	std::srand(std::time(0));
	random = std::rand() % 100;
	return (random);
}

Base *	generate(void) {
	int i = getRandomNumberMain();
	if (i >= 0 && i <= 33)
		return (new A());
	else if (i >= 34 && i <= 67)
		return (new B());
	else
		return (new C());
}

void	identify(Base* p) {
	try {
		if (dynamic_cast<A*>(p))
			std::cout << GREEN "This is A" STOP << std::endl;
		if (dynamic_cast<B*>(p))
			std::cout << GREEN "This is B" STOP << std::endl;
		if (dynamic_cast<C*>(p))
			std::cout << GREEN "This is C" STOP << std::endl;
	}
	catch (std::exception &e) {
		std::cout << RED << e.what() << STOP << std::endl;
	}
}

void	identify(Base& p) {
	try {
		A a = dynamic_cast<A&>(p);
		std::cout << GREEN "This is A" STOP << std::endl;
	}
	catch (std::exception &e) {
		std::cout << std::endl;
		std::cout << RED << e.what() << STOP << std::endl;
	}
	try {
		B b = dynamic_cast<B&>(p);
		std::cout << GREEN "This is B" STOP << std::endl;
	}
	catch (std::exception &e) {
		std::cout << RED << e.what() << STOP << std::endl;
	}
	try {
		C c = dynamic_cast<C&>(p);
		std::cout << GREEN "This is C" STOP << std::endl;
	}
	catch (std::exception &e) {
		std::cout << RED << e.what() << STOP << std::endl;
	}
}