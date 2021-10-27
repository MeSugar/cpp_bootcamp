#ifndef CONVERTER_H
# define CONVERTER_H

#include <iostream>
#include <exception>
#include <stdlib.h>
#include <limits>
#include <cerrno>

class Converter
{
private:
	std::string	_input;
	double		_valueAsLongDouble;
	char		_charValue;
	int			_intValue;
	float		_floatValue;
	double		_doubleValue;
	bool		_nan;
	bool		_plusInf;
	bool		_minusInf;
	bool		_wrongInput;
	bool		_dotFound;
	bool		_valueAfterDotFound;
	bool		_intRangeError;
	bool		_floatRangeError;
	bool		_doubleRangeError;
public:
	Converter(char *input);
	Converter(Converter const &src);
	~Converter(void);

	Converter		&operator=(Converter const &src);

	std::string	getInput(void) const;
	void		checkPseudoLiterals(void);
	void		checkFormat(void);
	void		findValueAfterDot(unsigned int i);
	void		toLongInt(void);
	void		toLongDouble(void);
	void		toChar(void);
	void		toInt(void);
	void		toFloat(void);
	void		toDouble(void);

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