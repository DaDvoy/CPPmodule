#include "Zombie.hpp"

int		main() {
	Zombie	Zo, Zoo;
	Zombie	*zombie;

	Zo.setName("\x1b[34;1mBest zombie\x1b[0m");
	Zo.announce();
	Zoo.setName("\x1b[34;1mVery best zombie\x1b[0m");
	Zoo.announce();
	zombie = newZombie("\x1b[34;1mBig zombie\x1b[0m");
	zombie->announce();
	randomChump("\x1b[34;1mLol\x1b[0m");
	delete zombie;
	return (0);
}