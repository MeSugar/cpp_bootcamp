#ifndef CHARACTER_H
# define CHARACTER_H

#include <iostream>
#include "ClassAMateria.hpp"

class ICharacter
{
public:
	virtual ~ICharacter() {}
	virtual std::string const & getName() const = 0;
	// virtual void equip(AMateria* m) = 0;
	// virtual void unequip(int idx) = 0;
	// virtual void use(int idx, ICharacter& target) = 0;
};

class Character : public ICharacter
{
private:
	std::string name;
protected:
	AMateria *m[4];
public:
	Character(std::string const &name);
	Character(Character const &src);
	~Character(void);
	Character	&operator=(Character const &src);

	std::string const & getName(void) const;
	void setName(std::string const & name);
};

#endif