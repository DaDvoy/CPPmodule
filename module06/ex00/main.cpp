#include "convert.hpp"

void		output(char **argv) {
	std::cout << GREEN "char: " STOP << LIGHT_BLUE;
	convChar(argv[1]);
	std::cout << GREEN "int: " STOP << LIGHT_BLUE;
	convInt(argv[1]);
	std::cout << GREEN "float: " STOP << LIGHT_BLUE;
	convFloat(argv[1]);
	std::cout << GREEN "double: " STOP << LIGHT_BLUE;
	convDouble(argv[1]);
	std::cout << STOP;
}


int		main(int argc, char** argv) {
	if (argc != 2) {
		std::cout << RED "Wrong amount of arg's" STOP << std::endl;
		return (1);
	}
	else {
		output(argv);
	}
	return (0);
}