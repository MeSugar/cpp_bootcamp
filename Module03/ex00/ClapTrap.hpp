#ifndef CLAP_TRAP_H
# define CLAP_TRAP_H

#include <iostream>

class ClapTrap
{
private:
	std::string			_name;
	unsigned int		_hitpoints;
	unsigned int		_energy_points;
	unsigned int		_attack_damage;
public:
	ClapTrap(std::string const name);
	ClapTrap(ClapTrap const &src);
	~ClapTrap(void);
	ClapTrap	&operator=(ClapTrap const &src);

	void		attack(std::string const &target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
};

#endif