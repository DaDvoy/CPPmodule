#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include "iostream"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string _name);
	ScavTrap(const ScavTrap &scav);
	~ScavTrap();

	void		guardGate();
};

#endif
