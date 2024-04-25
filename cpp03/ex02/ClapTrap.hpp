#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap {

protected:
    std::string name;
    unsigned int hit_points;
    unsigned int energy_points;
    int attack_damage;
    ClapTrap( void );// default constructor to ask it from ScavTrap

public:
    ClapTrap( std::string name );
    ClapTrap( const ClapTrap& ct);
    ClapTrap&   operator= ( const ClapTrap& ct);
    ~ClapTrap();

    void    attack(const std::string& target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);

};

#endif