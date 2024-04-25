#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ) {
    this->name = name;
    this->hit_points = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
    std::cout << "Default ScavTrap constructor called" << std::endl;
    return ;
}

ScavTrap::ScavTrap( const ScavTrap &copy ) {
    std::cout << "Copy ScavTrap constructor called" << std::endl;
    this->name = copy.name;
    this->hit_points = copy.hit_points;
    this->energy_points = copy.energy_points;
    this->attack_damage = copy.attack_damage;
    return ;
}

ScavTrap::~ScavTrap( void ) {
    std::cout << "Destructor ScavTrap called" << std::endl;
    return ;
}

ScavTrap& ScavTrap::operator=( const ScavTrap& other) {
	std::cout << "Copy assignment operator ScavTrap called" << std::endl;
	this->name = other.name;
    this->hit_points = other.hit_points;
    this->energy_points = other.energy_points;
    this->attack_damage = other.attack_damage;

	return *this;
}

void    ScavTrap::attack( const std::string& target ) {
    if (this->hit_points > 0 && this->energy_points > 0) {
        this->energy_points -= 1;
        std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage !" << std::endl;
    }
    else if (this->hit_points > 0)
        std::cout << "ScavTrap " << this->name << " has no more energy." << std::endl;
    else
        std::cout << "ScavTrap " << this->name << " cannot attack because it is dead." << std::endl;
}

void    ScavTrap::guardGate( void ) {
    std::cout << "ScavTrap " << this->name << " is now in guard mode." << std::endl;
}