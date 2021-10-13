#include "ClassMateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	std::cout << "MateriaSource default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		m[i] = 0;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	std::cout << "MateriaSource copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		if (src.m[i])
			this->m[i] = src.m[i]->clone();
}

MateriaSource::~MateriaSource(void)
{
	std::cout << "MateriaSource destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		if (this->m[i])
			delete this->m[i];
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &src)
{
	std::cout << "MateriaSource assignation operator called" << std::endl;
	for (int i = 0; i < 4; i++)
		if (this->m[i])
			delete this->m[i];
	for (int i = 0; i < 4; i++)
		if (src.m[i])
			this->m[i] = src.m[i]->clone();
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->m[i])
		{
			this->m[i] = m;
			break ;
		}
	}
}

AMateria	*MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
		if (this->m[i]->getType() == type)
			return (m[i]->clone());
	return (0);
}


