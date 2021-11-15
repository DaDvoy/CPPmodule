#include "ClapTrap.hpp"

int		main() {
	ClapTrap	clap2;
	clap2.attack("bravery and stupidity");
	clap2.takeDamage(10);
	clap2.beRepaired(0);

	ClapTrap	clap1("Pop");
	clap1.attack("prayers");
	clap1.takeDamage(3);
	clap1.beRepaired(2);
}