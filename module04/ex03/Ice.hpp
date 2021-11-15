#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice();
	~Ice();

	void use(ICharacter& target);
	AMateria *clone() const;
};

#endif
