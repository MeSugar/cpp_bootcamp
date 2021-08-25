#include "Contact.class.hpp"

Contact::Contact(void)
	// : _field_names({ "First name", "Last name", "Nickname", "Phone number", "Darkest secret" })
{
	this->_field_names[0] = "First name";
	this->_field_names[1] = "Last name";
	this->_field_names[2] = "Nickname";
	this->_field_names[3] = "Phone number"; 
	this->_field_names[4] = "Darkest secret";
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void Contact::collect_data(int number)
{
	int i;

	this->_index = number;
	for (i = 0; i < 5; i++)
	{
		std::cout << this->_field_names[i] << ": ";
		std::getline(std::cin, this->_data[i]);
	}
	std::time(&this->_last_change);
}

int	Contact::time_since_last_change(void)
{
	std::time_t	curr_time;

	std::time(&curr_time);
	return (curr_time - this->_last_change);
}

void Contact::print_contents(void)
{
	std::string buf;
	int i;
	
	std::cout << "|" << std::setw(10) << this->_index + 1; 
	for (i = 0; i < 3; i++)
	{
		buf = this->_data[i];
		if (buf.size() > 9)
		{
			buf = buf.substr(0, 9);
			buf.append(".", 1);
		}
		std::cout << "|" << std::setw(10) << std::right << buf;
	}	
	std::cout << "|" << std::endl;
}