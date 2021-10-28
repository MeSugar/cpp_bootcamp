#include "iter.hpp"

void ft_toupper(char c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	std::cout << c;
}

int main()
{
	//First test
	std::cout << "Test with char array" << std::endl;
	char str[] = "hello world!";
	std::cout << str << std::endl;
	iter(str, 12, ft_toupper<char>);
	std::cout << std::endl << std::endl;
	
	//Second test
	std::cout << "Test with string array" << std::endl;
	std::string array[5] = { "hello", "hello", "hello", "hello", "hello" };
	iter(array, 5, print<std::string>);
	std::cout << std::endl;

	//Third test
	std::cout << "Test with Int array" << std::endl;
	int tab[] = { 0, 1, 2, 3, 4 };
	iter(tab, 5, print<int>);
	std::cout << std::endl;

	//Forth test
	std::cout << "Test with class array" << std::endl;
	Awesome tab2[5];
	iter(tab2, 5, print<Awesome>);
	return 0;
}