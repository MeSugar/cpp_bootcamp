#ifndef WRONG_CAT_H
# define WRONG_CAT_H

#include "ClassWrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
protected:
public:
	WrongCat(void);
	WrongCat(WrongCat const &src);
	~WrongCat(void);
	WrongCat	&operator=(WrongCat const &src);
	// void makeSound(void) const;
};

#endif