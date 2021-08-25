#include "PhoneBook.class.hpp"

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
	std::cout << "=============================================" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void PhoneBook::add_contact(void)
{
	int oldest_contact;
	char buf;

	if (this->_number < 8)
	{
		this->_contact[this->_number].collect_data(this->_number);
		this->_number++;
	}
	else
	{
		std::cout << "The is book full!" << std::endl;
		std::cout << "Do you want to replace it's oldest contact?[Y/n]" << std::endl;
		std::cin >> buf;
		if (buf == 'Y')
		{
			oldest_contact = this->find_oldest_contact();
			this->_contact[oldest_contact].collect_data(oldest_contact);
		}
		else
			std::cout << "Invalid option. Returning to the main menu..." << std::endl;
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

void PhoneBook::search_contact(void)
{
	int i;

	if (!this->_number)
		std::cout << "The Phone Book is empty. Please, try to add some contacts." << std::endl;
	else
	{
		this->print_table_header();
		for (i = 0; i < this->_number; i++)
			this->_contact[i].print_contents();
	}
}

void PhoneBook::print_table_header(void)
{
	std::cout << "|" << std::setw(10) << "Index";
	std::cout << "|" << std::setw(10) << "First name";
	std::cout << "|" << std::setw(10) << "Last name";
	std::cout << "|" << std::setw(10) << "Nickname" << "|" << std::endl;
}