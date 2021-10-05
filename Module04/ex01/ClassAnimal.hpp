#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>
#include "ClassBrain.hpp"

class Animal
{
protected:
	std::string	type;
public:
	Animal(void);
	Animal(Animal const &src);
	virtual ~Animal(void);
	Animal	&operator=(Animal const &src);

	std::string		getType(void) const;
	virtual void	makeSound(void) const;
};

#endif