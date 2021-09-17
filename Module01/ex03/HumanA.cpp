#include "HumanA.hpp"

HumanA::HumanA(std::string const name, Weapon &weapon) : _name(name), _weapon(weapon)
{
	return ;
}

HumanA::~HumanA(void)
{
	return ;
}

void HumanA::attack(void)
{
	std::cout << this->_name << " attacks whith his " << this->_weapon.getType() << std::endl;
}