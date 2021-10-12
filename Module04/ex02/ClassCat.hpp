#ifndef CAT_H
# define CAT_H

#include "ClassAnimal.hpp"

class Cat : public Animal
{
private:
	Brain *brain;
public:
	Cat(std::string );
	Cat(Cat const &src);
	virtual ~Cat(void);
	Cat	&operator=(Cat const &src);
	
	void makeSound(void) const;
	void printArray(void);
	void setArray(std::string word);

};

#endif