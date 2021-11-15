#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int		main() {
	ClapTrap	clap2;
	clap2.attack("bravery and stupidity");
	clap2.takeDamage(10);
	clap2.beRepaired(0);
	
	std::cout << std::endl;
	std::cout << GRAY "----------------------" STOP << std::endl;
	std::cout << std::endl;
	
	DiamondTrap	diamond;
	diamond.attack("screaming and complaining");
	diamond.takeDamage(20);
	diamond.beRepaired(30);
	diamond.whoAmI();

	DiamondTrap	diamond2("Last");
	diamond2.attack("uncertainty and the end of everything");
	diamond2.takeDamage(100);
	diamond2.beRepaired(0);
	diamond2.whoAmI();
	diamond2.highFivesGuys();
}