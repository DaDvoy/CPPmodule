#include "iter.hpp"

int		main() {
	int arrInt[3] = {1, 2, 3}; 
	std::cout << GREEN "Array: " STOP;
	iter(arrInt, 3, print);
	std::cout << std::endl;

	std::cout << GRAY "---------------" STOP << std::endl;

	double d[4] = {2.43, 5.43, 24.54, 23.44};
	std::cout << GREEN "Array: " STOP;
	iter(d, 4, print);
	std::cout << std::endl;

	std::cout << GRAY "---------------" STOP << std::endl;

	std::string arr[3] = {"Smt, ", "Nth, ", "Ant"};
	std::cout << GREEN "Array: " STOP;
	iter(arr, 3, print);
	std::cout << std::endl;
}