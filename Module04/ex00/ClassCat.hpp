#ifndef CAT_H
# define CAT_H

#include "ClassAnimal.hpp"

class Cat : public Animal
{
protected:
public:
	Cat(void);
	Cat(Cat const &src);
	virtual ~Cat(void);
	Cat	&operator=(Cat const &src);
	void makeSound(void) const;
};

#endif