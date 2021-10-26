#ifndef CONVERTER_H
# define CONVERTER_H

#include <iostream>
#include <sstream>
#include <exception>
#include <stdlib.h>

class Converter
{
private:
	std::string	_input;
public:
	Converter(char *input);
	Converter(Converter const &src);
	~Converter(void);

	Converter		&operator=(Converter const &src);

	char		toChar(void);
	std::string	getInput(void) const;

	class impossible : public std::exception
	{
		public:
		virtual const char* what() const throw()
		{
			return ("impossible");
		}
	} impossibleException;

	class nonDisplayable : public std::exception
	{
		public:
		virtual const char* what() const throw()
		{
			return ("Non displayable");
		}
	} nonDisplayableException;
};

#endif