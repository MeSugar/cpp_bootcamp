#include "ClassDog.hpp"

Dog::Dog(void) : Animal()
{
	std::cout << "Dog default constructor called" << std::endl;
	Animal::type = "Dog";
}

Dog::Dog(Dog const &src) : Animal(src)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &src)
{
	std::cout << "Dog assignation operator called" << std::endl;
	this->type = src.type;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "I am a " << this->getType() << ". Woof-woof!" << std::endl;
}
