#include "DiamondTrap.hpp"


int main(void)
{
    DiamondTrap a("Pikachu");

    a.attack("Bulbasaur");
    a.takeDamage(1);
    a.beRepaired(1);
    a.takeDamage(10);
    a.beRepaired(100);
    a.beRepaired(100);
    a.guardGate();
    a.highFivesGuys();
    a.WhoAmI();
    return 0;
}