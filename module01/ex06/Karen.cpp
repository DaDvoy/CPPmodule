#include "Karen.hpp"

Karen::Karen () {}

Karen::~Karen() {}

void	Karen::debug() {
	std::cout << "\x1b[30;1mI love to get extra bacon for my"
		<< "7XL-double-cheese-triple-pickle-special-ketchup burger."
		<< " I just love it!\x1b[0m" << std::endl;
}

void	Karen::info() {
	std::cout << "\x1b[32;1mI cannot believe adding extra"
		<< "bacon cost more money. You don’t put enough!"
		<< "If you did I would not have to ask for it!\x1b[0m" << std::endl;
}

void	Karen::warning() {
	std::cout << "\x1b[33;1mI think I deserve to have some extra bacon for free."
		<< " I’ve been coming here for years and you just "
		<< "started working here last month.\x1b[0m" << std::endl;
}

void	Karen::error() {
	std::cout << "\x1b[31;1mThis is unacceptable, "
		<< "I want to speak to the manager now.\x1b[0m" << std::endl;
}

void	Karen::complain(std::string level) {
	std::string	arrLev[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	fctPtr		funPoin[] = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	int			i = 0;
	
	while (level != arrLev[i] && ++i < 4){}
	switch (i)
	{
	case 0:
		(this->*funPoin[0])();
	case 1:
		(this->*funPoin[1])();
	case 2:
		(this->*funPoin[2])();
	case 3:
		(this->*funPoin[3])();
		break ;
	default:
		std::cout << "\x1b[31;1mSomething went wrong, try again" << std::endl;
		break ;
	}
}