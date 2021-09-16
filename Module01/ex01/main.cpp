#include "Zombie.hpp"

int main(void)
{
	Zombie	*newHorde;
	int		i;
	newHorde = zombieHorde(21, "Another zombie");
	for (i = 0; i < 21; i++)
		newHorde->announce();
	delete [] newHorde;
	return (0);
}