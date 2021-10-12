#ifndef A_MATERIA_H
# define A_MATERIA_H

#include <iostream>

class AMateria
{
	protected:
	std::string type;

	public:
	AMateria(std::string const & type);
	AMateria(AMateria const &src);
	virtual ~AMateria(void);
	AMateria	&operator=(AMateria const &src);

	
	std::string const	&getType() const;
	virtual AMateria*	clone() const = 0;
	// virtual void		use(ICharacter &target);
};


#endif