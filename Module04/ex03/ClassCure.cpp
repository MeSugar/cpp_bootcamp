#include "ClassCure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(Cure const &src) : AMateria(src)
{
	std::cout << "Cure copy constructor called" << std::endl;
	*this = src;
}

Cure::~Cure(void)
{
	std::cout << "Cure destructor called" << std::endl;
}

Cure &Cure::operator=(Cure const &src)
{
	std::cout << "Cure assignation operator called" << std::endl;
	src.getType();
	return (*this);
}

//Actions
AMateria	*Cure::clone(void) const
{
	return (new Cure());
}

void		Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
