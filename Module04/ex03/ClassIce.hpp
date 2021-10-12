#ifndef ICE_H
# define ICE_H

#include <iostream>
#include "ClassAMateria.hpp"

class Ice : public AMateria
{
protected:

public:
	Ice(void);
	Ice(Ice const &src);
	~Ice(void);
	Ice	&operator=(Ice const &src);

	AMateria	*clone(void) const;
	// virtual void	makeSound(void) const =0;
};

#endif