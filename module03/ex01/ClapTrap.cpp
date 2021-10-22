#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	this->name = "nameless";
	this->hitpoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	std::cout << LIGHT_BLUE << this->name << STOP
		<< GREEN " is ready to fight" STOP << std::endl;
}

ClapTrap::ClapTrap(std::string _name) {
	this->name = _name;
	this->hitpoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	std::cout << LIGHT_BLUE << this->name << STOP << GREEN " is ready to fight" STOP << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clap) {
	std::cout << "Copycat in place" << std::endl;
	this->operator= (clap);
}

ClapTrap::~ClapTrap() {
	std::cout << LIGHT_BLUE << this->name << STOP << GRAY << " left the fightfield" STOP << std::endl;
}

// functions

void	ClapTrap::attack(std::string const & target) {
	std::cout << LIGHT_BLUE << this->name << STOP << RED
		<< " attack with: " << STOP << YELLOW << target << STOP << std::endl;
}

void 	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << LIGHT_BLUE << this->name << STOP << RED
		<< " take damage: " STOP <<  YELLOW << amount << STOP << std::endl;
}

void 	ClapTrap::beRepaired(unsigned int amount) {
	std::cout << LIGHT_BLUE << this->name << STOP << PINK " restored: " STOP
		<< YELLOW << amount << STOP << std::endl;
}

// overload operator

ClapTrap& ClapTrap::operator=(const ClapTrap &clap) {
	std::cout << "Assignation operator ClapTrap called" << std::endl;
	name = clap.name;
	hitpoints = clap.hitpoints;
	energyPoints = clap.energyPoints;
	attackDamage = clap.attackDamage;
	return (*this);
}



