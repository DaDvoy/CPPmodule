#include "Zombie.hpp"

Zombie*		newZombie( std::string name ) {
    Zombie*  anotherZombie;
    anotherZombie = new Zombie(name);
    return (anotherZombie);
}