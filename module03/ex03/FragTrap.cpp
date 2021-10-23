#include "FragTrap.hpp"

FragTrap::FragTrap() {
	this->name = "Nervous system";
	this->hitpoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << LIGHT_BLUE << this->name << STOP << GREEN
		<< " raises all emotions to the maximum" STOP
		<< std::endl;
}

FragTrap::FragTrap(std::string _otherName) {
	this->name = _otherName;
	this->hitpoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << LIGHT_BLUE << name << STOP << GREEN " take out all their stupidity"
		<< STOP << std::endl;
}

FragTrap::FragTrap(const FragTrap &frag) {
	std::cout << RED "Take care of your nerves, the nervous system cannot be restored" STOP << std::endl;	
	this->operator= (frag);
}

FragTrap::~FragTrap() {
	std::cout << GRAY "Congratulations, the " STOP << LIGHT_BLUE
		<< this->name << STOP << GRAY << " has been killed ..." STOP << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &frag) {
	std::cout << YELLOW "Do you seriously think this will work?" STOP << std::endl;
	name = frag.name;
	hitpoints = frag.hitpoints;
	energyPoints = frag.energyPoints;
	attackDamage = frag.attackDamage;
	return (*this);
}

void		FragTrap::highFivesGuys(void) {
	std::cout << LIGHT_BLUE << this->name << STOP << YELLOW " give five" STOP << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount) {
	if (attackDamage > 0)
		attackDamage -= amount;
	else
		std::cout << RED "death" STOP << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount) {
	if (attackDamage > 0)
		std::cout << "too late" << std::endl;
	else
		energyPoints += amount;
}