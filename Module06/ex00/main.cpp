#include "Converter.hpp"

int main(int ac, char **av)
{
	if (ac == 2)
	{
		Converter a(av[1]);
		a.checkPseudoLiterals();
		a.checkFormat();
		a.toLongDouble();
		a.toChar();
        a.toInt();
        a.toFloat();
        a.toDouble();
		// ss << av[1];
		// // std::cout << ss.str() << std::endl;
		// std::string str = ss.str();
		// std::cout << std::atof(str.c_str()) << std::endl;
		// std::cout << std::atoi(str.c_str()) << std::endl;
		// int a = 42;
		// float b = (double)a + 0.3;
		// std::cout << a << std::endl;
		// std::cout << b << std::endl;
	}
	else
	{
		std::cout << "Error: wrong number of arguments" << std::endl;
	}



	return (0);
}