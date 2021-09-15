#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include <iostream>
#include <ctime>
#include <iomanip>
#include <charconv>
#include <stdlib.h>
#include "ClassContact.hpp"

class PhoneBook
{
private:
	int	_number;
	Contact _contact[8];
public:
	PhoneBook(void);
	~PhoneBook(void);
	
	void	add_contact(void);
	int		find_oldest_contact(void);
	void	search_contact(void);
	void	print_table_header(void);
	void	print_contact_content(void);
};

#endif
