#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	this->_name = name;
	// this->_weapon = NULL;
}

HumanB::HumanB(std::string name, Weapon &weapon) {
	this->_name = name;
	this->_weapon = &weapon;
}

HumanB::~HumanB() {}

void	HumanB::setWeapon(Weapon &otherWeapon) {
	this->_weapon = &otherWeapon;
}

void	HumanB::attack() {
	std::cout << "\x1b[32;1m" << this->_name << "\x1b[0m"
		<< "\x1b[31;1m attacks \x1b[0m";
	if (this->_weapon == NULL)
		std::cout << "\x1b[36;1mfists\x1b[0m";
	else
		std::cout << "\x1b[31;1mwith \x1b[0m" << "\x1b[36;1m" << this->_weapon->getType() << "\x1b[0m";
	std::cout << std::endl;
}