#include "ScavTrap.hpp"


int main(void)
{
    ScavTrap a("Pikachu");

    a.attack("Bulbasaur");
    a.takeDamage(1);
    a.beRepaired(1);
    a.takeDamage(10);
    a.takeDamage(1);
    a.beRepaired(100);
    a.beRepaired(100);
    return 0;
}