#include "Ice.hpp"

Ice::Ice() : AMateria() {
	_type = "ice";
	std::cout << LIGHT_BLUE << _type << STOP
		<< PINK " was created" STOP << std::endl;
}

Ice::~Ice() {}

void Ice::use(ICharacter& target) {
	std::cout << LIGHT_BLUE << _type << STOP
		<< GREEN "  shoots an ice bolt at  " STOP << YELLOW
		<< target.getName() << STOP << std::endl;
}

AMateria    *Ice::clone() const {
	AMateria *clone = new Ice();
	return (clone);
}