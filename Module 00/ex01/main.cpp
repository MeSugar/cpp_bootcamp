#include <iostream>
#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

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
	}
	

	// new_book.foo();
	// new_book.x = 51;
	// new_book.foo();
	// new_book.x = 21;
	// std::cout << new_book.x << std::endl;
	return (0);
}