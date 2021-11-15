#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++)
		this->_materia[i] = 0;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++) {
		if (_materia[i])
			delete _materia[i];
	}
}

void	MateriaSource::learnMateria(AMateria* another) {
	for (int i = 0; i < 4; i++) {
		if (this->_materia[i] == 0)
		{
			this->_materia[i] = another;
			break ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++) {
		if (this->_materia[i] && this->_materia[i]->getType() == type)
			return (_materia[i]->clone());
	}
	return (0);
}