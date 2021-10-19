#include "ClassDog.hpp"

Dog::Dog(std::string word) : Animal(), brain(new Brain())
{
	std::cout << "Dog default constructor called" << std::endl;
	Animal::type = "Dog";
	// for (int i = 0; i < 100; i++)
	// 	this->brain->ideas[i] = word;
	this->brain->setIdeas(word);
}

Dog::Dog(Dog const &src) : Animal(src)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->brain = new Brain();
	*this = src;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->brain;
}

Dog &Dog::operator=(Dog const &src)
{
	std::cout << "Dog assignation operator called" << std::endl;
	this->type = src.type;
	*this->brain = *src.brain;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "I am a " << this->getType() << ". Woof-woof!" << std::endl;
	// std::cout << &this->brain << std::endl;
}

void Dog::printArray(void)
{
	for (int i = 0; i < 100; i++)
		// std::cout << this->brain->ideas[i] << std::endl;
		std::cout << this->brain->getIdea(i) << std::endl;

}

void Dog::setArray(std::string word)
{
	// for (int i = 0; i < 100; i++)
	// 	this->brain->ideas[i] = word;
	this->brain->setIdeas(word);
}
