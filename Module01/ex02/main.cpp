#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "The address in memory of the string:                 " << &str << std::endl;
	std::cout << "The address in memory of the string using pointer:   " << stringPTR << std::endl;
	std::cout << "The address in memory of the string using reference: " << &stringREF << std::endl << std::endl;
	std::cout << "The string using pointer:   " << *stringPTR << std::endl;
	std::cout << "The string using reference: " << stringREF << std::endl;
	return (0);
}