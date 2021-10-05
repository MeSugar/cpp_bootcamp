#ifndef DOG_H
# define DOG_H

#include "ClassAnimal.hpp"

class Dog : public Animal
{
private:
	Brain *brain;
public:
	Dog(std::string word);
	Dog(Dog const &src);
	virtual ~Dog(void);
	Dog	&operator=(Dog const &src);
	void makeSound(void) const;

	void printArray(void);
	void setArray(std::string word);
};

#endif