#include "Karen.hpp"

int		main(int argc, char **argv) {
	Karen _karen;

	if (argc == 2)
		_karen.complain(argv[1]);
	else
	{
		std::cout << "\x1b[31;1mWrong arguments\x1b[0m" << std::endl;
		return (1);
	}
	return (0);
}