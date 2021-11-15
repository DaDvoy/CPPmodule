#include "Animal.hpp"

Animal::Animal() {
	this->type = "animal";
	std::cout << LIGHT_BLUE << this->type << STOP
		<< PINK " created!" STOP << std::endl;
}

Animal::Animal(Animal &animal) {
	this->operator= (animal);
}

// Animal::Animal(Dog &animal) {
// 	this->operator= (animal);
// }


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

std::ostream& operator<< (std::ostream &out, const Animal &animal) {
	out << animal.getType() << std::endl
		<< GRAY "I have " STOP << animal.getType() << std::endl;
	return (out);
}

// Cat

Cat::Cat() : Animal() {
	this->type = "Cat";
	std::cout << LIGHT_BLUE << this->type << STOP
		<< PINK " open eyes :)" STOP << std::endl;
	this->catBrain = new Brain();
}

Cat::Cat(Cat &cat) {
	std::cout << LIGHT_BLUE << this->type << STOP
		<< YELLOW " has own copycat" STOP << std::endl;
	this->operator= (cat);
}

Cat::~Cat() {
	std::cout << LIGHT_BLUE << this->type << STOP
		<< RED " went to sleep." STOP << std::endl;
	delete this->catBrain;
}

Cat &Cat::operator=(Cat &_copyCat) {
	this->catBrain = new Brain();
	this->type = _copyCat.getType();
	this->catBrain = _copyCat.catBrain;
	return (*this);
}

Brain *Cat::getBrain() {
	return (this->catBrain);
}

void	Cat::makeSound() const {
	std::cout << LIGHT_BLUE << this->type << STOP
		<< GREEN " meow." STOP << std::endl;
}

// std::ostream& operator<< (std::ostream &out, const Cat &cat) {
// 	out << cat.getType() << std::endl
// 		<< GRAY "I have " STOP << cat.getType() << std::endl;
// 	return (out);
// }


// Dog

Dog::Dog() : Animal() {
	this->type = "Dog";
	std::cout << LIGHT_BLUE << this->type << STOP
		<< PINK " ready to new day!" STOP << std::endl;
	this->dogBrain = new Brain();
}

Dog::Dog(Dog &dog) {
	std::cout << LIGHT_BLUE << this->type << STOP
		<< YELLOW " has own copyDog" STOP << std::endl;
	this->operator= (dog);
}

Dog::~Dog() {
	std::cout << LIGHT_BLUE << this->type << STOP
		<< RED " went for a walk." STOP << std::endl;
	delete this->dogBrain;
}

Dog &Dog::operator=(Dog &_copyDog) {
	this->dogBrain = new Brain();
	this->type = _copyDog.getType();
	this->dogBrain = _copyDog.dogBrain;
	return (*this);
}

Brain	*Dog::getBrain() {
	return (this->dogBrain);
}

void	Dog::makeSound() const {
	std::cout << LIGHT_BLUE << this->type << STOP
		<< GREEN " woof." STOP << std::endl;
}

// std::ostream& operator<< (std::ostream &out, const Dog &dog) {
// 	out << dog.getType() << std::endl
// 		<< GRAY "I have " STOP << dog.getType() << std::endl;
// 	return (out);
// }
