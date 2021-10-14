#include "iostream"
#include "string"

int		main() {
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;
	std::cout << "\x1b[32;1moriginal address:  \x1b[0m" << &str << std::endl;
	std::cout << "\x1b[35;1mstringPTR address: \x1b[0m" << stringPTR << std::endl;
	std::cout << "\x1b[36;1mstringREF address: \x1b[0m" << &stringREF << std::endl;
	std::cout << "\x1b[35;1mstringPTR: \x1b[0m" << *stringPTR << std::endl;
	std::cout << "\x1b[36;1mstringREF: \x1b[0m" << stringREF << std::endl;
}