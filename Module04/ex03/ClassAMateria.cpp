#include "ClassAMateria.hpp"

AMateria::AMateria(std::string const & type) : type(type)
{
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(AMateria const &src)
{
	std::cout << "AMateria copy constructor called" << std::endl;
	*this = src;
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria destructor called" << std::endl;
}

AMateria &AMateria::operator=(AMateria const &src)
{
	std::cout << "AMateria assignation operator called" << std::endl;
	this->type = src.getType();
	return (*this);
}

std::string const	&AMateria::getType(void) const
{
	return (this->type);
}

void	AMateria::use(ICharacter &target)
{
	target.getName();
}