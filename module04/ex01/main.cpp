#include "Animal.hpp"
#include "Brain.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	j->makeSound();
	i->makeSound();
	delete i;
	delete j;

	Cat cat1, cat2;
	std::cout<<cat1<<std::endl;
	std::cout<<cat2<<std::endl;
	cat1 = cat2;
	std::cout<<"cat1 = cat2"<<std::endl;
	std::cout<<cat1<<std::endl;

	Dog dog1, dog2;
	std::cout<<dog1<<std::endl;
	std::cout<<dog2<<std::endl;
	dog1 = dog2;
	std::cout<<"dog1 = dog2"<<std::endl;
	std::cout<<dog1<<std::endl;

	return (0);
}