#ifndef CURE_H
# define CURE_H

#include <iostream>
#include "ClassAMateria.hpp"
#include "ClassCharacter.hpp"

class Cure : public AMateria
{
protected:

public:
	Cure(void);
	Cure(Cure const &src);
	~Cure(void);
	Cure	&operator=(Cure const &src);

	AMateria	*clone(void) const;
	void		use(ICharacter &target);
};

#endif