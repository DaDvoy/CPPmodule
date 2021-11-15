#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

# define RED		"\x1b[31m"
# define GREEN		"\x1b[32m"
# define LIGHT_BLUE	"\x1b[34m"
# define GRAY		"\x1b[90m"
# define YELLOW		"\x1b[33m"
# define PINK		"\x1b[35m"
# define STOP		"\x1b[0m"

#include <iostream>

class ClapTrap
{
private:
	std::string		name;
	int				hitpoints;
	int				energyPoints;
	int				attackDamage;
public:
	ClapTrap();
	ClapTrap(std::string _name);
	~ClapTrap();

	void			attack(std::string const & target);
	void 			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);
};

#endif
