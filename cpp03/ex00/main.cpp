#include "ClapTrap.hpp"

int main( void ) {
    ClapTrap    ct1("nb1");
    ClapTrap    ct2("nb2");

    ct1.attack("nb2");
    ct2.takeDamage(7);
    ct2.beRepaired(3);
    ct2.attack("nb1");
    ct1.takeDamage(4);
    ct1.beRepaired(10);
    return 0;
}