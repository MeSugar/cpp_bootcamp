#include "FragTrap.hpp"

FragTrap::FragTrap(std::string const name) : ClapTrap(name)
{
	std::cout << "FragTrap default constructor called" << std::endl;
	this->_hitpoints = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src)
{
	
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = src;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &src)
{
	std::cout << "FragTrap assignation operator called" << std::endl;
	this->_name = src._name;
	this->_hitpoints = src._hitpoints;
	this->_energy_points = src._energy_points;
	this->_attack_damage = src._attack_damage;
	return (*this);
}

//Actions
void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap "<< this->_name << " requests a hive five" << std::endl;
}

void	FragTrap::attack(std::string const &target)
{
	std::cout << "FragTrap "<< this->_name << " attacks " << target
	<< ", causing " << this->_attack_damage << " points of damage!" << std::endl;
}