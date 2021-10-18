#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string const name) : ClapTrap(name)
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->_hitpoints = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src)
{
	
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
	std::cout << "ScavTrap assignation operator called" << std::endl;
	this->_name = src._name;
	this->_hitpoints = src._hitpoints;
	this->_energy_points = src._energy_points;
	this->_attack_damage = src._attack_damage;
	return (*this);
}

//Actions
void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_name << " have enterred in Gate keeper mode" << std::endl;
}

void	ScavTrap::attack(std::string const &target)
{
	std::cout << "ScavTrap "<< this->_name << " attacks " << target
	<< ", causing " << this->_attack_damage << " points of damage!" << std::endl;
}