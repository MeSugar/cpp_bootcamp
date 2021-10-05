#ifndef DOG_H
# define DOG_H

#include "ClassAnimal.hpp"

class Dog : public Animal
{
protected:
public:
	Dog(void);
	Dog(Dog const &src);
	~Dog(void);
	Dog	&operator=(Dog const &src);
	void makeSound(void) const;
};

#endif