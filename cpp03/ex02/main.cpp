#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void ) {
    ClapTrap    ct1("nb1");
    FragTrap    ct3("nb2");
    FragTrap    ct2(ct3);

    ct2.attack("nb1");
    ct2.takeDamage(1000);
    ct2.attack("nb1");
    ct2.beRepaired(10);
    ct2.attack("nb1");
    return 0;
}