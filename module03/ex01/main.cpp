#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int		main() {
	ClapTrap	clap2;
	clap2.attack("bravery and stupidity");
	clap2.takeDamage(10);
	clap2.beRepaired(0);

	ClapTrap	clap1("Pop");
	clap1.attack("prayers");
	clap1.takeDamage(3);
	clap1.beRepaired(2);

	ScavTrap	scav1;
	scav1.attack("by the great will of a warrior");
	scav1.takeDamage(30);
	scav1.beRepaired(7);

	ScavTrap	scav2("Civil");
	scav2.attack("complaints");
	scav2.takeDamage(13);
	scav2.beRepaired(0);
}