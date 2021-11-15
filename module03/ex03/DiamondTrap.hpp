#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string	_name;
public:
	DiamondTrap();
	DiamondTrap(std::string _someName);
	DiamondTrap(const DiamondTrap &diamond);
	~DiamondTrap();

	DiamondTrap& operator=(const DiamondTrap &diamond);
	void		attack(std::string const &target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void		whoAmI();
};

#endif