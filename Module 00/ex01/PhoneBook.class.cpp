#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void)
{
	this->number = 0;
	std::cout << "Welcome to my Awesome Phone Book!" << std::endl;
	std::cout << std::endl;
	std::cout << "Please, use one of the following commands:" << std::endl;
	std::cout << "==========================================" << std::endl;
	std::cout << "ADD    - to add a new contact" << std::endl;
	std::cout << "SEARCH - to display a list of available contacts" << std::endl;
	std::cout << "EXIT   - to exit Phone Book" << std::endl;
	std::cout << "==========================================" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void PhoneBook::add_contact(void)
{
	if (this->_number < 8)
		this->_number++;
	this->_contact[this->_number].collect_data(this->_number);
    return ;
}