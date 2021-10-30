#include "Character.hpp"

Character::Character(std::string name) {
	this->_name = name;
	for (int i = 0; i < 4; i++) {
		this->_inventory[i] = 0;
	}
}

Character::Character(const Character &copyname) {
	this->operator= (copyname);
}

Character::~Character() {
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i] != 0)
			delete this->_inventory[i];
}

Character &Character::operator=(const Character &_copy) {
	if (this == &_copy)
		return (*this);
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i])
			delete _inventory[i];
		this->_inventory[i] = _copy._inventory[i]->clone();
	}
	return (*this);
}

std::string const &Character::getName() const {
	return (_name);
}

void	Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i++) {
		if (_inventory[i] == 0) {
			_inventory[i] = m;
			break ;
		}
	}
}

void	Character::unequip(int idx) {
	if (idx < 0 || idx > 3)
		return ;
	if (this->_inventory[idx] != 0)
		_inventory[idx] = 0;
}

void	Character::use(int idx, ICharacter & target) {
	if (idx >= 0 && idx < 4) {
		if (this->_inventory[idx] != 0)
			this->_inventory[idx]->use(target);
	}
	else
		std::cout << RED "Something went wrong with use " STOP << std::endl;
}