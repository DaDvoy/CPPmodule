#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

# define RED		"\x1b[31m"
# define GREEN		"\x1b[32m"
# define LIGHT_BLUE	"\x1b[34m"
# define GRAY		"\x1b[90m"
# define YELLOW		"\x1b[33m"
# define PINK		"\x1b[35m"
# define STOP		"\x1b[0m"

class Animal
{
protected:
	std::string		type;
public:
	Animal();
	Animal(Animal &animal);
	virtual ~Animal();

	virtual void	makeSound() const;
	std::string		getType() const;

	Animal &operator=(Animal &_copyAnimal);
};

class Cat : public Animal
{
public:
	Cat();
	Cat(Cat &cat);
	virtual ~Cat();

	void	makeSound() const;
};

class Dog : public Animal
{
public:
	Dog();
	Dog(Dog &dog);
	virtual ~Dog();

	void	makeSound() const;
};

#endif
