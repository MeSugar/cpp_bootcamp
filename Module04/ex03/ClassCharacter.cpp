#include "ClassCharacter.hpp"

Character::Character (std::string const &name) : name(name)
{
	std::cout << "Character default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		m[i] = 0;
}

Character::Character(Character const &src)
{
	std::cout << "Character copy constructor called" << std::endl;
	*this = src;
}

Character::~Character(void)
{
	std::cout << "Character destructor called" << std::endl;
}

Character &Character::operator=(Character const &src)
{
	std::cout << "Character assignation operator called" << std::endl;
	this->name = src.getName();
	return (*this);
}

//Actions
std::string const & Character::getName(void) const
{
	return (this->name);
}

void Character::setName(std::string const & name)
{
	this->name = name;
}
