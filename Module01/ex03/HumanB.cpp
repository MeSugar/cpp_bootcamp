#include "HumanB.hpp"

HumanB::HumanB(std::string const name) : _name(name)
{
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}

void    HumanB::setWeapon(Weapon &Weapon)
{
    this->_weapon = &Weapon;
}


void    HumanB::attack(void)
{
	std::cout << this->_name << " attacks whith his " << this->_weapon->getType() << std::endl;
}