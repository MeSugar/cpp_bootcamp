#include "ClassCat.hpp"

Cat::Cat(std::string word) : Animal(), brain(new Brain())
{
	std::cout << "Cat default constructor called" << std::endl;
	Animal::type = "Cat";
	// for (int i = 0; i < 100; i++)
		// this->brain->ideas[i] = word;
		this->brain->setIdeas(word);

}

Cat::Cat(Cat const &src) : Animal(src)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->brain = new Brain();
	*this = src;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->brain;
}

Cat &Cat::operator=(Cat const &src)
{
	std::cout << "Cat assignation operator called" << std::endl;
	this->type = src.type;
	*this->brain = *src.brain;
	return (*this);
}

//Actions

void	Cat::makeSound(void) const
{
	std::cout << "I am a " << this->getType() << ". Meow!" << std::endl;
}

void Cat::printArray(void)
{
	for (int i = 0; i < 100; i++)
		std::cout << this->brain->getIdea(i) << std::endl;
}

void Cat::setArray(std::string word)
{
	// for (int i = 0; i < 100; i++)
	// 	this->brain->ideas[i] = word;
	this->brain->setIdeas(word);
}