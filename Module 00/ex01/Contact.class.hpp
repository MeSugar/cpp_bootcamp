#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <iostream>
#include <ctime>
#include <iomanip>


class Contact
{
private:
	int			_index;
	std::time_t	_last_change;
	std::string	_data[5];
	std::string _field_names[5];
public:
	Contact(void);
	~Contact(void);

	void	collect_data(int number);
	int		time_since_last_change();
	void	print_contents();
};

#endif