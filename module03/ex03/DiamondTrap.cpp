#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
	this->_name = "The youngest in the family";
	ClapTrap::name = this->_name + "_clap_name";
	this->hitpoints = FragTrap::hitpoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
	std::cout << LIGHT_BLUE << this->_name << STOP << GREEN
		<< " woke up" STOP
		<< std::endl;
}

DiamondTrap::DiamondTrap(std::string _someName) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name) {
	this->_name = _someName;
	ClapTrap::name = this->_name + "_clap_name";
	this->hitpoints = FragTrap::hitpoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
	std::cout << LIGHT_BLUE << this->_name << STOP << GREEN
		<< " why have I been called?" STOP << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamond) {
	std::cout << RED "Who am I?" STOP << std::endl;	
	this->operator= (diamond);
}

DiamondTrap::~DiamondTrap() {
	std::cout << LIGHT_BLUE << this->_name << STOP << GRAY << " have been waiting for this for a long time" STOP << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &diamond) {
		std::cout << "The copecat here..." << std::endl;
	name = diamond.name;
	hitpoints = diamond.hitpoints;
	energyPoints = diamond.energyPoints;
	attackDamage = diamond.attackDamage;
	return (*this);
}

void	DiamondTrap::attack(std::string const &target) {
	ScavTrap::attack(target);
}

void	DiamondTrap::takeDamage(unsigned int amount) {
	if (attackDamage > 0)
		attackDamage -= amount;
	else
		std::cout << RED "death" STOP << std::endl;
}

void	DiamondTrap::beRepaired(unsigned int amount) {
	if (attackDamage > 0)
		std::cout << RED "too late" STOP << std::endl;
	else
		energyPoints += amount;
}

void	DiamondTrap::whoAmI() {
	std::cout << YELLOW "I am " STOP << this->_name << LIGHT_BLUE " and Clap is " STOP
		<< ClapTrap::name << std::endl;
}