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
	}
	else
	{
		std::cout << "Error: wrong number of arguments" << std::endl;
	}



	return (0);
}