 #include "FragTrap.hpp"


int main(void)
{
    FragTrap a("Pikachu");
    ClapTrap b("Halo");

    b = a;
    b.attack("123");
    // a.attack("Bulbasaur");
    // a.takeDamage(1);
    // a.beRepaired(1);
    // a.takeDamage(10);
    // a.takeDamage(1);
    // a.beRepaired(100);
    // a.beRepaired(100);
    return 0;
}