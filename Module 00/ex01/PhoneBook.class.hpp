#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include <iostream>
#include "Contact.class.hpp"

class PhoneBook
{
private:
	int	_number;
	Contact _contact[8];
public:
	PhoneBook(void);
	~PhoneBook(void);
	
	void	add_contact(void);

};

#endif
