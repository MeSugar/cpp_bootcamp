#include "Karen.hpp"

Karen::Karen(void)
{
	return ;
}

Karen::~Karen(void)
{
	return ;
}

void	Karen::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-"
	<< "triple-pickle-special-ketchup burger. I just love it!" << std::endl << std::endl;
}

void	Karen::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. "
	<< "You don’t put enough! If you did I would not have to ask for it!" << std::endl << std::endl;
}
void	Karen::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been "
	<< "coming here for years and you just started working here last month." << std::endl << std::endl;
}

void	Karen::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl << std::endl;
}

int	Karen::setLevel(std::string level)
{
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
			return (i);
	}
	return (-1);
}

void	Karen::printOut(void (Karen::*foo[])(), int i)
{
	for (int j = i; j < 4; j++)
		(this->*foo[j])();
}


void Karen::complain(std::string level)
{
	void (Karen::*foo[])() = { &Karen::debug, &Karen::info, &Karen::warning, &Karen::error };
	switch (this->setLevel(level))
	{
		case 0:
			this->printOut(foo, 0);
			break;
		case 1:
			this->printOut(foo, 1);
			break;
		case 2:
			this->printOut(foo, 2);
			break;
		case 3:
			this->printOut(foo, 3);
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}