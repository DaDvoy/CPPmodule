#include "Zombie.hpp"

int		main() {
	Zombie	*hordeZooo;

	hordeZooo = zombieHorde(7, "Deadline");
	for (int i = 0; i < 7; i++)
		hordeZooo->announce();
	delete[] hordeZooo;
	return (0);
}