#include "Zombie.hpp"

int	main(void)
{
	Zombie *newZomb;
	
	randomChump("Zombie on stack");
	newZomb = newZombie("Allocated zombie");
	delete newZomb;
	return (0);
}