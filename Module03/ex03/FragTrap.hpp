#ifndef FRAG_TRAP_H
# define FRAG_TRAP_H

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:
	unsigned int const _FragHitpoints;
	unsigned int const _FragDmg;
public:
	FragTrap(std::string const name);
	FragTrap(FragTrap const &src);
	~FragTrap(void);
	FragTrap	&operator=(FragTrap const &src);

	unsigned int getFragHitpoints(void);
	unsigned int getFragDmg(void);
	void	highFivesGuys(void);
	void	attack(std::string const &target);
};

#endif