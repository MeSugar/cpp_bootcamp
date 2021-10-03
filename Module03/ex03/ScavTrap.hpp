#ifndef SCAV_TRAP_H
# define SCAV_TRAP_H

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
private:
	unsigned int const _ScavEnergy;
public:
	ScavTrap(std::string const name);
	ScavTrap(ScavTrap const &src);
	~ScavTrap(void);
	ScavTrap	&operator=(ScavTrap const &src);

	unsigned int getScavEnergy(void);
	void	guardGate(void);
	void	attack(std::string const &target);
};

#endif