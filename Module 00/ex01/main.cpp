#include <iostream>
#include <stdlib.h>
#include "PhoneBook.class.hpp"

int main()
{
	std::string buf;
	PhoneBook PhoneBook;

	while (1) {
		std::getline(std::cin, buf);
		if (std::cin.eof())
            return (0);
		if (!buf.compare("EXIT"))
			exit(0);
		else if (!buf.compare("ADD"))
			PhoneBook.add_contact();
		else if (!buf.compare("SEARCH"))
			PhoneBook.search_contact();
		else
			std::cout << "Invalid option. Please, use ADD, SEARCH or EXIT" << std::endl;
	}
	return (0);
}