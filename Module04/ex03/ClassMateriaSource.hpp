#ifndef MATERIA_SOURCE_H
# define MATERIA_SOURCE_H

#include <iostream>
#include "ClassAMateria.hpp"

class IMateriaSource
{
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

class MateriaSource : public IMateriaSource
{
private:
protected:
	AMateria *m[4];
public:
	MateriaSource(void);
	MateriaSource(MateriaSource const &src);
	~MateriaSource(void);
	MateriaSource	&operator=(MateriaSource const &src);

	void		learnMateria(AMateria*);
	AMateria	*createMateria(std::string const & type);
};

#endif