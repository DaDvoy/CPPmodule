#include "Zombie.hpp"

Zombie::Zombie(void) {
	std::cout << "\x1b[32;1mZombie was created\x1b[0m" << std::endl;
}

Zombie::Zombie(std::string name) {
	_name = name;
	std::cout << _name << " resuscitate\x1b[0m" << std::endl;
}

Zombie::~Zombie() {

	std::cout << "\x1b[31;1m" << _name << "\x1b[31;1m gone to another world\x1b[0m" << std::endl;
}

void	Zombie::setName(std::string name) {
	this->_name = name;
}

void	Zombie::announce() {
	std::cout << "\x1b[36;1m" << _name << "\x1b[0m" <<"\x1b[36;1m BraiiiiiiinnnzzzZ...\x1b[0m" << std::endl;
}