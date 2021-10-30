#include "Cure.hpp"

Cure::Cure() : AMateria() {
    this->_type = "cure";
    std::cout << LIGHT_BLUE << this->_type << STOP
        << PINK " begining" STOP << std::endl;
}

Cure::~Cure() {}

void Cure::use(ICharacter& target) {
    std::cout << LIGHT_BLUE << this->_type << STOP
        << GREEN " heals " STOP << YELLOW
        << target.getName() << STOP
        << GREEN "  wounds" STOP << std::endl;
}

AMateria    *Cure::clone() const {
    AMateria *clone = new Cure();
    return (clone);
}
