#include "ClassPhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->_number = 0;
	std::cout << "=============================================" << std::endl;
	std::cout << "Welcome to my Awesome Phone Book!" << std::endl;
	std::cout << std::endl;
	std::cout << "Please, use one of the following commands:" << std::endl;
	std::cout << "ADD    - add a new contact" << std::endl;
	std::cout << "SEARCH - display a list of available contacts" << std::endl;
	std::cout << "EXIT   - exit Phone Book" << std::endl;
	std::cout << "=============================================" << std::endl << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void	PhoneBook::add_contact(void)
{
	int oldest_contact;
	std::string buf;

	if (this->_number < 8)
	{
		this->_contact[this->_number].collect_data(this->_number);
		this->_number++;
	}
	else
	{
		std::cout << std::endl << "Warning! The is book full!" << std::endl;
		std::cout << "Do you want to replace it's oldest contact?" << std::endl;
		std::cout << "Type \"Yes\" if you are sure"  << std::endl;
		std::getline(std::cin, buf);
		if (!buf.compare("Yes"))
		{
			oldest_contact = this->find_oldest_contact();
			this->_contact[oldest_contact].collect_data(oldest_contact);
		}
		else
			std::cout << "Invalid option. Returning to the main menu..." << std::endl << std::endl;
	}
    return ;
}

int	PhoneBook::find_oldest_contact(void)
{
	int	i;
	int oldest;
	int diff;
	int oldest_contact;

	oldest = 0;
	for (i = 0; i < 8; i++)
	{
		diff = this->_contact[i].time_since_last_change();
		if (diff > oldest)
		{
			oldest = diff;
			oldest_contact = i;
		}
	}
	return (oldest_contact);
}

void	PhoneBook::search_contact(void)
{
	int i;

	if (!this->_number)
		std::cout << "The Phone Book is empty. Please, try to add some contacts." << std::endl;
	else
	{
		this->print_table_header();
		for (i = 0; i < this->_number; i++)
			this->_contact[i].print_table_content();
		this->print_contact_content();
	}
}

void	PhoneBook::print_table_header(void)
{
	std::cout << "/////////////////////////////////////////////" << std::endl;
	std::cout << "|                  Phone book               |" << std::endl;
	std::cout << "\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|" << std::setw(10) << "Index";
	std::cout << "|" << std::setw(10) << "First name";
	std::cout << "|" << std::setw(10) << "Last name";
	std::cout << "|" << std::setw(10) << "Nickname" << "|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
}

void	PhoneBook::print_contact_content(void)
{
	std::string	buf;
	char		c[2];

	c[0] = this->_number + '0';
	std::cout << std::endl <<"Please, enter the index of a contact in order to see it's information" << std::endl;
	std::getline(std::cin, buf);
	if (buf.size() == 1 && (buf[0] > '0' && buf[0] <= c[0]))
		this->_contact[atoi(buf.c_str()) - 1].print_content();
	else
		std::cout << "Invalid input. Returning to the main menu..." << std::endl;
}
