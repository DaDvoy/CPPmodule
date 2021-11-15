#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int		main() {
	ClapTrap	clap2;
	clap2.attack("bravery and stupidity");
	clap2.takeDamage(10);
	clap2.beRepaired(0);

	ClapTrap	clap1("Pop");
	clap1.attack("prayers");
	clap1.takeDamage(3);
	clap1.beRepaired(2);
	
	std::cout << std::endl;
	std::cout << GRAY "----------------------" STOP << std::endl;
	std::cout << std::endl;
	
	FragTrap	Frag1;
	Frag1.attack("panic attacks");
	Frag1.takeDamage(50);
	Frag1.beRepaired(0);
	Frag1.highFivesGuys();

	FragTrap	Frag12(Frag1);
	Frag1.attack("unreality of its existence");
	Frag1.takeDamage(10);
	Frag1.beRepaired(0);
	Frag1.highFivesGuys();

	FragTrap	Frag2("Stupid questions");
	Frag2.attack("\"But my mother told me ...\"");
	Frag2.takeDamage(40);
	Frag2.beRepaired(5);
	Frag2.highFivesGuys();
}