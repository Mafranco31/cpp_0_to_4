#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : name(""), hit_points(10), energy_points(10), attack_damage(0) {
    std::cout << "Default ClapTrap constructor void called" << std::endl;
    return ;
}

ClapTrap::ClapTrap( std::string name ) : name(name), hit_points(10), energy_points(10), attack_damage(0) {
    std::cout << "Default ClapTrap constructor called" << std::endl;
    return ;
}

ClapTrap::ClapTrap( const ClapTrap &ct ) {
    std::cout << "Copy ClapTrap constructor called" << std::endl;
    *this = ct;
    return ;
}

ClapTrap::~ClapTrap( void ) {
    std::cout << "Destructor ClapTrap called" << std::endl;
    return ;
}

ClapTrap& ClapTrap::operator=( const ClapTrap& other) {
	std::cout << "Copy assignment operator ClapTrap called" << std::endl;
	this->name = other.name;
    this->hit_points = other.hit_points;
    this->energy_points = other.energy_points;
    this->attack_damage = other.attack_damage;

	return *this;
}

/*  ------------    Functions   --------------  */

void    ClapTrap::attack( const std::string& target ) {
    if (this->hit_points > 0 && this->energy_points > 0) {
        this->energy_points -= 1;
        std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage !" << std::endl;
    }
    else if (this->hit_points > 0)
        std::cout << "ClapTrap " << this->name << " has no more energy." << std::endl;
    else
        std::cout << "ClapTrap " << this->name << " cannot attack because it is dead." << std::endl;
}

void    ClapTrap::takeDamage( unsigned int amount ) {
    if (this->hit_points > 0) {
        if (this->hit_points < amount)
            amount = hit_points;
        this->hit_points -= amount;
        std::cout << "ClapTrap " << this->name << " has taken " << amount << " points of damage." << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->name << " is already dead." << std::endl;
}

void    ClapTrap::beRepaired( unsigned int amount ) {
    if (this->hit_points > 0 && this->energy_points > 0) {
        this->energy_points -= 1;
        this->hit_points += amount;
        std::cout << "ClapTrap " << this->name << " just repaired itself for " << amount << " hit points." << std::endl;
    }
    else if (this->hit_points > 0)
        std::cout << "ClapTrap " << this->name << " has no more energy." << std::endl;
    else
        std::cout << "ClapTrap " << this->name << " is already dead." << std::endl; 
}