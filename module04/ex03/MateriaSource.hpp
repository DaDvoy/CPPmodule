#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria		*_materia[4];
public:
	MateriaSource();
	~MateriaSource();

	void learnMateria(AMateria* another);
	AMateria* createMateria(std::string const & type);
};

#endif
