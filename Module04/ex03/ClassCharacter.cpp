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
	for (int i = 0; i < 4; i++)
		if (src.m[i])
			this->m[i] = src.m[i]->clone();
	this->name = src.getName();
}

Character::~Character(void)
{
	std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		if (this->m[i])
			delete this->m[i];
}

Character &Character::operator=(Character const &src)
{
	std::cout << "Character assignation operator called" << std::endl;
	for (int i = 0; i < 4; i++)
		if (this->m[i])
			delete this->m[i];
	for (int i = 0; i < 4; i++)
		if (src.m[i])
			this->m[i] = src.m[i]->clone();
	this->name = src.getName();
	return (*this);
}

//Actions
std::string const & Character::getName(void) const
{
	return (this->name);
}

void	Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->m[i])
		{
			this->m[i] = m;
			break ;
		}
	}
}

void	Character::unequip(int idx)
{
	if (this->m[idx])
		this->m[idx] = 0;
}

void	Character::use(int idx, ICharacter& target)
{
	if (this->m[idx])
		m[idx]->use(target);
}
