#ifndef FRAG_TRAP_H
# define FRAG_TRAP_H

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
public:
	FragTrap(std::string const name);
	FragTrap(FragTrap const &src);
	~FragTrap(void);
	FragTrap	&operator=(FragTrap const &src);

	void	highFivesGuys(void);
	void	attack(std::string const &target);
};

#endif