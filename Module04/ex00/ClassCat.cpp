#include "ClassCat.hpp"

Cat::Cat(void) : Animal()
{
	std::cout << "Cat default constructor called" << std::endl;
	Animal::type = "Cat";
}

Cat::Cat(Cat const &src) : Animal(src)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &src)
{
	std::cout << "Cat assignation operator called" << std::endl;
	this->type = src.type;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "I am a " << this->getType() << ". Meow!" << std::endl;
}
