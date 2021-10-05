#ifndef WRONG_ANIMAL_H
# define WRONG_ANIMAL_H

#include <iostream>

class WrongAnimal
{
protected:
	std::string	type;
public:
	WrongAnimal(void);
	WrongAnimal(WrongAnimal const &src);
	~WrongAnimal(void);
	WrongAnimal	&operator=(WrongAnimal const &src);

	std::string		getType(void) const;
	void			makeSound(void) const;
};

#endif