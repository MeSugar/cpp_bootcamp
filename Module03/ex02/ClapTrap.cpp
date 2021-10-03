#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string const name)
: _name(name), _hitpoints(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
	std::cout << "ClapTrap assignation operator called" << std::endl;
	this->_name = src._name;
	this->_hitpoints = src._hitpoints;
	this->_energy_points = src._energy_points;
	this->_attack_damage = src._attack_damage;
	return (*this);
}

//Actions
void	ClapTrap::attack(std::string const &target)
{
	std::cout << "ClapTrap "<< this->_name << " attack " << target
	<< ", causing " << this->_attack_damage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitpoints)
	{
		std::cout << "ClapTrap " << this->_name << " take " << amount << " points of damage!" << std::endl;
		if (this->_hitpoints - amount <= 0)
		{
			this->_hitpoints = 0;
			std::cout << "Look what you've done! Now it's broken(" << std::endl;
		}
		else
			this->_hitpoints -= amount;
	}
	else
		std::cout << "God! Stop please! ClapTrap " << this->_name << " is already broken and cannot take any damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitpoints < 100)
	{
		std::cout << "ClapTrap " << this->_name << " has been repaired for " << amount << " hitpoints! You're very kind person! Thx! ( ˘ ³˘)♥" << std::endl;
		if (this->_hitpoints + amount > 100)
			this->_hitpoints = 100;
		else
			this->_hitpoints += amount;
	}
	else
		std::cout << "Thank you, dear! You don't need to bother, cuz ClapTrap " << this->_name << " is healthy and still in it's prime!" << std::endl;
}
