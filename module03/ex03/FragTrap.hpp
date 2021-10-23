#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string _otherName);
	FragTrap(const FragTrap &frag);
	~FragTrap();

	FragTrap &operator= (const FragTrap &frag);

	void		highFivesGuys(void);
	void		attack(std::string const &target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
};

#endif
