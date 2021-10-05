#include "ClassAnimal.hpp"

Animal::Animal(void) : type("Animal")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(Animal const &src)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=(Animal const &src)
{
	std::cout << "Animal assignation operator called" << std::endl;
	this->type = src.type;
	return (*this);
}

//Actions
std::string	Animal::getType(void) const
{
	return (this->type);
}

void Animal::makeSound(void) const
{
	std::cout << "I am an " << this->getType() << ". @#$%!" << std::endl;
}