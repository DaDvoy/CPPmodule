#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	this->name = "Assassin";
	this->hitpoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << LIGHT_BLUE << this->name << STOP << GREEN
		<< " spiritually was ready for this battle for a long time" STOP
		<< std::endl;
}

ScavTrap::ScavTrap(std::string _name) : ClapTrap(name){
	name = _name;
	hitpoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << LIGHT_BLUE << name << STOP << GREEN " spiritually was ready for this battle for a long time"
		<< STOP << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scav) {
	std::cout << "Main copycat in place" << std::endl;
	this->operator= (scav);
}

ScavTrap::~ScavTrap() {
	std::cout << LIGHT_BLUE << this->name << STOP << GRAY << " completed own way" STOP << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &scav) {
	std::cout << "Assignation operator ScavTrap called" << std::endl;
	name = scav.name;
	hitpoints = scav.hitpoints;
	energyPoints = scav.energyPoints;
	attackDamage = scav.attackDamage;
	return (*this);
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap have enterred in Gate keeper mode" << std::endl;
}