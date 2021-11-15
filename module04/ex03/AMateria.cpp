#include "AMateria.hpp"

AMateria::AMateria() {
	this->_type = "Nothing";
}

AMateria::AMateria(std::string const & type) {
	this->_type = type;
}

AMateria::~AMateria() {
	std::cout << LIGHT_BLUE << this->_type << STOP
		<< RED " bye-bye" STOP << std::endl;
}


std::string const &AMateria::getType() const {
	return (this->_type);
}

void AMateria::use(ICharacter& target) {
	std::cout << YELLOW << target.getName() << std::endl;
}