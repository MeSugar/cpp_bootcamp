#include "Converter.hpp"

Converter::Converter(char *input) : _input(input)
{
	// std::cout << "Converter default constructor called" << std::endl;
}

Converter::Converter(Converter const &src)
{
	// std::cout << "Converter copy constructor called" << std::endl;
	*this = src;
}

Converter::~Converter(void)
{
	// std::cout << "Converter destructor called" << std::endl;
}

Converter &Converter::operator=(Converter const &src)
{
	// std::cout << "Converter assignation operator called" << std::endl;
	this->_input = src.getInput();
	return (*this);
}

//Methods
std::string	Converter::getInput(void) const
{
	return (this->_input);
}

char	Converter::toChar(void)
{
	int charAsInt;
	
	if (this->_input.compare(0, 4, "+inff") && this->_input.compare(0, 4, "-inff")
		&& this->_input.compare(0, 4, "nanf") && this->_input.compare(0, 4, "+inf")
		&& this->_input.compare(0, 4, "-inf") && this->_input.compare(0, 4, "nan"))
		{
			charAsInt = atoi(this->_input.c_str());
			if (charAsInt >= 32 && charAsInt <= 127)
				return (static_cast<char>(charAsInt));
			else
				throw this->impossibleException;
		}
	else
		throw this->nonDisplayableException;
}