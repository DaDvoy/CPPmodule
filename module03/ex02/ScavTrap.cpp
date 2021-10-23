#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(){
	this->name = "Assassin";
	this->hitpoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << LIGHT_BLUE << this->name << STOP << GREEN
		<< " spiritually was ready for this battle for a long time" STOP
		<< std::endl;
}

ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name){
	this->name = _name;
	this->hitpoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
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
	std::cout << LIGHT_BLUE << this->name << STOP << YELLOW " have enterred in Gate keeper mode" STOP << std::endl;
}