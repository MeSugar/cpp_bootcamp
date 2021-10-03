#ifndef DIAMOND_TRAP_H
# define DIAMOND_TRAP_H

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string _name;
public:
	DiamondTrap(std::string const name);
	DiamondTrap(DiamondTrap const &src);
	~DiamondTrap(void);
	DiamondTrap	&operator=(DiamondTrap const &src);

	void	attack(std::string const &target);
	void	WhoAmI(void);
};

#endif