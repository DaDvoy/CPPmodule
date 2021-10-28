#include "Animal.hpp"
#include "Brain.hpp"

int		getRandomNumberMain(int min, int max)
{
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0); 
	// Равномерно распределяем рандомное число в нашем диапазоне
	return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

int main()
{
	Animal* meta = new Animal();
	Animal* i = new Cat();
	Animal* j = new Dog();
	std::cout << GREEN "Animal is " STOP << LIGHT_BLUE << meta->getType() << STOP << std::endl;
	std::cout << GREEN "Cat is " STOP << LIGHT_BLUE << i->getType() << STOP << std::endl;
	std::cout << GREEN "Dog is " STOP << LIGHT_BLUE << j->getType() << STOP << std::endl;
	meta->makeSound();
	i->makeSound();
	j->makeSound();

	std::cout << "------COPY-DOG-----" << std::endl;
	Dog* temp = new Dog();
	Dog* j_copy = new Dog(*temp);
	std::cout << GREEN << j_copy->getType() << STOP << std::endl;
	j_copy->makeSound();

	std::cout << "------COPY-CAT-----" << std::endl;

	Cat* temp2 = new Cat();
	Cat* i_copy = new Cat(*temp2);
	std::cout << GREEN << i_copy->getType() << STOP << std::endl;
	i_copy->makeSound();

	std::cout << "------CALL-DESTRUCTORS-----" << std::endl;

	delete meta;
	delete j;
	delete j_copy;
	delete i_copy;


	std::cout << "-----ARRAY-of-ANIMAL-----" << std::endl;

	 Animal *ar[10];
	for (int i = 0; i < 10 ; i++)
	{
		std::cout << GRAY << i << ") " STOP;
		if (getRandomNumberMain(1, 2) == 1)
			ar[i] = new Cat();
		else
			ar[i] = new Dog();
		ar[i]->makeSound();
		std::cout << std::endl;
	}

	std::cout << "-----DELETE-ARRAY-of-ANIMAL-----" << std::endl;
	std::cout << std::endl;

	for (int i = 0; i < 10 ; i++)
	{
		std::cout << GRAY << i << ") " STOP;// << std::endl;
		delete ar[i];
	}

	return (0);
}

