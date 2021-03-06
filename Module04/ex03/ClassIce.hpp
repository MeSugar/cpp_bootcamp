#ifndef ICE_H
# define ICE_H

#include <iostream>
#include "ClassAMateria.hpp"
#include "ClassCharacter.hpp"

class Ice : public AMateria
{
protected:

public:
	Ice(void);
	Ice(Ice const &src);
	~Ice(void);
	Ice	&operator=(Ice const &src);

	AMateria	*clone(void) const;
	void		use(ICharacter &target);
};

#endif