#include "Animal.hpp"
#include "WrongAnimal.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << RED << j->getType() << STOP << GRAY " is Dog" STOP << std::endl;
	std::cout << RED << i->getType() << STOP << GRAY " is Cat" STOP << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << "---------------------" << std::endl;

	const WrongAnimal* meta2 = new WrongAnimal();
	const WrongAnimal* u = new WrongDog();
	const WrongAnimal* k = new WrongCat();
	std::cout << RED << u->getType() << STOP << GRAY " is animal" STOP << std::endl;
	std::cout << RED << k->getType() << STOP << GRAY " is animal" STOP << std::endl;
	u->makeSound();
	k->makeSound();
	meta2->makeSound();

	std::cout << "---------------------" << std::endl;

	delete meta;
	delete j;
	delete i;
	delete u;
	delete k;
	delete meta2;
}