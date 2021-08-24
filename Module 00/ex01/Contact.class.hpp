#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <iostream>

class Contact
{
private:
	int			_index;
	std::string	_data[5];
	std::string	const _field_names[5] = { "First name", "Last name", "Nickname", "Phone number", "Darkest secret" };
public:
	Contact(void);
	~Contact(void);

	void	collect_data(int number);
};

#endif