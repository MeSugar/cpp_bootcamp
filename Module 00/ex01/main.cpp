#include <iostream>
#include <stdlib.h>
#include "PhoneBook.class.hpp"

int main()
{
	std::string buf;
	PhoneBook PhoneBook;

	while (1) {
		std::getline(std::cin, buf);
		if (!buf.compare("EXIT"))
			exit(0);
		else if (!buf.compare("ADD"))
			PhoneBook.add_contact();
		else if (!buf.compare("SEARCH"))
			PhoneBook.search_contact();
		else
			std::cout << "Invalid option. Please, use ADD, SEARCH or EXIT" << std::endl;
	}
	

	// new_book.foo();
	// new_book.x = 51;
	// new_book.foo();
	// new_book.x = 21;
	// std::cout << new_book.x << std::endl;
	return (0);
}