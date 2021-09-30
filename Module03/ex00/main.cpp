#include "ClapTrap.hpp"


int main(void)
{
    ClapTrap a("Pikachu");

    a.attack("Bulbasaur");
    a.takeDamage(1);
    a.beRepaired(1);
    a.takeDamage(10);
    a.takeDamage(1);
    a.beRepaired(10);
    return 0;
}