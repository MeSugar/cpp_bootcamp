#include "ClassWrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
	std::cout << "WrongCat default constructor called" << std::endl;
	WrongAnimal::type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &src) : WrongAnimal(src)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = src;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &src)
{
	std::cout << "WrongCat assignation operator called" << std::endl;
	this->type = src.type;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "I am a " << this->getType() << ". Meow!" << std::endl;
}
