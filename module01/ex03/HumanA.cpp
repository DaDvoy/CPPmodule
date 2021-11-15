#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) {
	this->_name = name;
	this->_weapon = &weapon;
}

HumanA::~HumanA() {}

void	HumanA::attack() {
	std::cout << "\x1b[32;1m" << _name << "\x1b[0m"
		<< "\x1b[31;1m attacks with \x1b[0m"
		<< "\x1b[34;1m" << _weapon->getType() << "\x1b[0m"
		<< std::endl;
}