#include "Animal.hpp"

Animal::Animal() {
	this->type = "animal";
	std::cout << LIGHT_BLUE << this->type << STOP
		<< PINK " created!" STOP << std::endl;
}

Animal::Animal(Animal &animal) {
	this->operator= (animal);
}

Animal::~Animal() {
	std::cout << LIGHT_BLUE << this->type << STOP
		<< RED " is in BlackBook now..." STOP << std::endl;
}

Animal &Animal::operator=(Animal &_copyAnimal) {
	this->type = _copyAnimal.getType();
	return (*this);
}

std::string	Animal::getType() const {
	return (this->type);
}

void	Animal::makeSound() const {
	std::cout << LIGHT_BLUE << this->type << STOP
		<< YELLOW " something in animal language" STOP << std::endl;
}

// Cat

Cat::Cat() : Animal() {
	this->type = "Cat";
	std::cout << LIGHT_BLUE << this->type << STOP
		<< PINK " open eyes :)" STOP << std::endl;
}

Cat::Cat(Cat &cat) {
	this->operator= (cat);
}

Cat::~Cat() {
	std::cout << LIGHT_BLUE << this->type << STOP
		<< RED " went to sleep." STOP << std::endl;
}

void	Cat::makeSound() const {
	std::cout << LIGHT_BLUE << this->type << STOP
		<< GREEN " meow." STOP << std::endl;
}

// Dog

Dog::Dog() : Animal() {
	this->type = "Dog";
	std::cout << LIGHT_BLUE << this->type << STOP
		<< PINK " ready to new day!" STOP << std::endl;
}

Dog::Dog(Dog &Dog) {
	this->operator= (Dog);
}

Dog::~Dog() {
	std::cout << LIGHT_BLUE << this->type << STOP
		<< RED " went for a walk." STOP << std::endl;
}

void	Dog::makeSound() const {
	std::cout << LIGHT_BLUE << this->type << STOP
		<< GREEN " woof." STOP << std::endl;
}
