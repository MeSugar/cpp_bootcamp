#include "ClassBrain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(Brain const &src)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = src;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain &Brain::operator=(Brain const &src)
{
	std::cout << "Brain assignation operator called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = src.ideas[i];
	return (*this);
}

void	Brain::setIdeas(std::string const &word)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = word;
}

std::string &Brain::getIdea(int indx)
{
	return (this->ideas[indx]);
}
