#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << GREEN "The top is: " PINK << mstack.top() << STOP << std::endl;
	mstack.pop();
	std::cout << GREEN "The size is: " YELLOW << mstack.size() << STOP << std::endl;
	
	std::cout << GRAY "----------------------" STOP << std::endl;
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	std::srand(time(0));
	for (int i = 0; i < 100; i++) {
		mstack.push(std::rand());
	}
	mstack.push(0);
	std::cout << GREEN "The top is: " PINK << mstack.top() << STOP << std::endl;
	std::cout << GREEN "The size is: " YELLOW << mstack.size() << STOP << std::endl;
	
	std::cout << GRAY "----------------------" STOP << std::endl;

	for (int i = 0; i < 75; i++) {
		mstack.pop();
	}
	std::cout << GREEN "The top is: " PINK << mstack.top() << STOP << std::endl;
	std::cout << GREEN "The size is: " YELLOW << mstack.size() << STOP << std::endl;
	
	std::cout << GRAY "----------------------" STOP << std::endl;

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << GREEN "The stack contains: ";
	while (it != ite)
	{
		std::cout << LIGHT_BLUE  << *it << " " << STOP;
		++it;
	}
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << GRAY "------------NEW---TEST------------" STOP << std::endl;
	std::cout << std::endl;

	MutantStack<int> Mstack;
	Mstack.push(777);
	Mstack.push(333);
	std::cout << GREEN "The top is: " PINK << Mstack.top() << STOP << std::endl;
	Mstack.pop();
	std::cout << GREEN "The size is: " YELLOW << Mstack.size() << STOP << std::endl;
	
	std::cout << GRAY "----------------------" STOP << std::endl;
	
	Mstack.push(4);
	Mstack.push(3);
	Mstack.push(45);
	std::cout << GREEN "The top is: " PINK << Mstack.top() << STOP << std::endl;
	std::cout << GREEN "The size is: " YELLOW << Mstack.size() << STOP << std::endl;
	
	std::cout << GRAY "----------------------" STOP << std::endl;

	MutantStack<int>::reverseIterator It = Mstack.rbegin();
	MutantStack<int>::reverseIterator Ite = Mstack.rend();
	++It;
	--It;
	std::cout << GREEN "The stack contains: ";
	while (It != Ite)
	{
		std::cout << LIGHT_BLUE  << *It << " " << STOP;
		++It;
	}
	std::cout << std::endl;

	return 0;
}