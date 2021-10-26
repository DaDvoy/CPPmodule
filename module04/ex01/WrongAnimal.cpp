#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	this->type = "Wronganimal";
	std::cout << LIGHT_BLUE << this->type << STOP
		<< PINK " created!" STOP << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal &Wronganimal) {
	this->operator= (Wronganimal);
}

WrongAnimal::~WrongAnimal() {
	std::cout << LIGHT_BLUE << this->type << STOP
		<< RED " is in BlackBook now..." STOP << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal &_copyWrongAnimal) {
	this->type = _copyWrongAnimal.getType();
	return (*this);
}

std::string	WrongAnimal::getType() const {
	return (this->type);
}

void	WrongAnimal::makeSound() const {
	std::cout << LIGHT_BLUE << this->type << STOP
		<< GREEN " something in WrongAnimal language" STOP << std::endl;
}

// WrongCat

WrongCat::WrongCat() : WrongAnimal() {
	this->type = "WrongCat";
	std::cout << LIGHT_BLUE << this->type << STOP
		<< PINK " open eyes :)" STOP << std::endl;
}

WrongCat::WrongCat(WrongCat &Wrongcat) {
	this->operator= (Wrongcat);
}

WrongCat::~WrongCat() {
	std::cout << LIGHT_BLUE << this->type << STOP
		<< RED " went to sleep." STOP << std::endl;
}

void	WrongCat::makeSound() const {
	std::cout << LIGHT_BLUE << this->type << STOP
		<< YELLOW " meow." STOP << std::endl;
}

// WrongDog

WrongDog::WrongDog() : WrongAnimal() {
	this->type = "WrongDog";
	std::cout << LIGHT_BLUE << this->type << STOP
		<< PINK " ready to new day!" STOP << std::endl;
}

WrongDog::WrongDog(WrongDog &WrongDog) {
	this->operator= (WrongDog);
}

WrongDog::~WrongDog() {
	std::cout << LIGHT_BLUE << this->type << STOP
		<< RED " went for a walk." STOP << std::endl;
}

void	WrongDog::makeSound() const {
	std::cout << LIGHT_BLUE << this->type << STOP
		<< YELLOW " woof." STOP << std::endl;
}
