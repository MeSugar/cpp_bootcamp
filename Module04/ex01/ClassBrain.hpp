#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>

class Brain
{
protected:
public:
	Brain(void);
	Brain(Brain const &src);
	~Brain(void);
	Brain	&operator=(Brain const &src);

	std::string	ideas[100];
};

#endif