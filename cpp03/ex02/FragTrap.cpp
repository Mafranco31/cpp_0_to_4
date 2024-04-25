#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ) {
    this->name = name;
    this->hit_points = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
    std::cout << "Default FragTrap constructor called" << std::endl;
    return ;
}

FragTrap::FragTrap( const FragTrap &copy ) {
    std::cout << "Copy FragTrap constructor called" << std::endl;
    this->name = copy.name;
    this->hit_points = copy.hit_points;
    this->energy_points = copy.energy_points;
    this->attack_damage = copy.attack_damage;
    return ;
}

FragTrap::~FragTrap( void ) {
    std::cout << "Destructor FragTrap called" << std::endl;
    return ;
}

FragTrap& FragTrap::operator=( const FragTrap& other) {
	std::cout << "Copy assignment operator FragTrap called" << std::endl;
	this->name = other.name;
    this->hit_points = other.hit_points;
    this->energy_points = other.energy_points;
    this->attack_damage = other.attack_damage;

	return *this;
}

void    FragTrap::attack( const std::string& target ) {
    if (this->hit_points > 0 && this->energy_points > 0) {
        this->energy_points -= 1;
        std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage !" << std::endl;
    }
    else if (this->hit_points > 0)
        std::cout << "FragTrap " << this->name << " has no more energy." << std::endl;
    else
        std::cout << "FragTrap " << this->name << " cannot attack because it is dead." << std::endl;
}

void    FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << this->name << " has requested a high five !" << std::endl;
}