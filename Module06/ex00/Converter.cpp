#include "Converter.hpp"

Converter::Converter(char *input)
: _input(input), _nan(false), _plusInf(false), _minusInf(false), _wrongInput(false),
 _dotFound(false), _valueAfterDotFound(false), _intRangeError(false), _floatRangeError(false), _doubleRangeError(false)
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

//Getters
std::string	Converter::getInput(void) const
{
	return (this->_input);
}

void	Converter::checkPseudoLiterals(void)
{
	if (!this->_input.compare("nan") || !this->_input.compare("nanf"))
		this->_nan = true;
	if (!this->_input.compare("-inf") || !this->_input.compare("-inff")) 
		this->_minusInf = true;
	if (!this->_input.compare("+inf") || !this->_input.compare("+inff")
	|| !this->_input.compare("inf") || !this->_input.compare("inff"))
		this->_plusInf = true;
}

void	Converter::checkFormat(void)
{
	bool	fChar = false;
	bool	dotChar = false;
	bool	signChar = false;
	bool	numberEncountered = false;

	if (!this->_nan && !this->_minusInf && !this->_plusInf)
	{
		for (unsigned long i = 0; i < this->_input.size(); i++)
		{
			if (this->_input[i] == 'f' && (fChar || this->_input.size() - 1 != i))
			{
				this->_wrongInput = true;
				break ;
			}
			else if (this->_input[i] == 'f' && !fChar && this->_input.size() - 1 == i)
				fChar = true;
			else if ((this->_input[i] == '-' || this->_input[i] == '+' ) && (signChar || i != 0))
			{
				this->_wrongInput = true;
				break ;
			}
			else if ((this->_input[i] == '-' || this->_input[i] == '+' ) && !signChar && i == 0)
				signChar = true;
			else if (this->_input[i] == '.' && dotChar)
			{
				this->_wrongInput = true;
				break ;
			}
			else if (this->_input[i] == '.' && !dotChar)
			{
				dotChar = true;
				this->_dotFound = true;
				this->findValueAfterDot(i);
			}
			else if (this->_input[i] >= '0' && this->_input[i] <= '9')
				numberEncountered = true;
			else
			{
				this->_wrongInput = true;
				break ;
			}
		}
		if (!numberEncountered)
			this->_wrongInput = true;
	}
}

void	Converter::findValueAfterDot(unsigned int i)
{
	for ( ; i < this->_input.size(); i++)
	{
		if (this->_input[i] >= '1' && this->_input[i] <= '9')
			this->_valueAfterDotFound = true;
	}
}

void	Converter::toLongDouble(void)
{
	char *end;

	this->_valueAsLongDouble = std::strtold(this->_input.c_str(), &end);
	if (errno == ERANGE || this->_valueAsLongDouble > std::numeric_limits<double>::max() || this->_valueAsLongDouble < -std::numeric_limits<double>::max())
	{
		this->_doubleRangeError = true;
		this->_floatRangeError = true;
		this->_intRangeError = true;
	}
	if (this->_valueAsLongDouble > std::numeric_limits<float>::max() || this->_valueAsLongDouble < -std::numeric_limits<float>::max())
		this->_floatRangeError = true;
	if (errno == ERANGE || this->_valueAsLongDouble > std::numeric_limits<int>::max() || this->_valueAsLongDouble < std::numeric_limits<int>::min())
		this->_intRangeError = true;
}

void	Converter::toChar(void)
{
	std::cout << "char: ";
	try
	{
		if (!this->_nan && !this->_minusInf && !this->_plusInf && !this->_wrongInput)
		{
			if (this->_intRangeError)
				throw this->impossibleException;
			if (static_cast<int>(this->_valueAsLongDouble) >= 32 && static_cast<int>(this->_valueAsLongDouble) <= 127)
			{
				this->_charValue = static_cast<char>(this->_valueAsLongDouble);
				std::cout << "'" << this->_charValue << "'" << std::endl;
			}
			else
				throw this->nonDisplayableException;
		}
		else
			throw this->impossibleException;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	Converter::toInt(void)
{
	std::cout << "int: ";
	try
	{
		if (!this->_nan && !this->_minusInf && !this->_plusInf && !this->_wrongInput)
		{
			if (this->_intRangeError)
				throw this->impossibleException;
			this->_intValue = static_cast<int>(this->_valueAsLongDouble);
			std::cout << this->_intValue << std::endl;
		}
		else
			throw this->impossibleException;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	Converter::toFloat(void)
{
	std::cout << "float: ";
	try
	{
		if (!this->_wrongInput)
		{
			if (this->_doubleRangeError && !this->_plusInf && !this->_minusInf)
				throw this->impossibleException;
			if (this->_plusInf)
				std::cout << "+inff" << std::endl;
			else if (this->_minusInf)
				std::cout << "-inff" << std::endl;
			else
			{
				this->_floatValue = static_cast<float>(this->_valueAsLongDouble);
				std::cout << this->_floatValue;
				if ((!this->_dotFound || !this->_valueAfterDotFound) && !this->_nan)
					std::cout << ".0";
				std::cout << "f" << std::endl;
			}
		}
		else
			throw this->impossibleException;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	Converter::toDouble(void)
{
	std::cout << "double: ";
	try
	{
		if (!this->_wrongInput)
		{
			if (this->_doubleRangeError && !this->_plusInf && !this->_minusInf)
				throw this->impossibleException;
			if (this->_plusInf)
				std::cout << "+inf" << std::endl;
			else if (this->_minusInf)
				std::cout << "-inf" << std::endl;
			else
			{
				this->_doubleValue = static_cast<double>(this->_valueAsLongDouble);
				std::cout << this->_doubleValue;
				if ((!this->_dotFound || !this->_valueAfterDotFound) && !this->_nan)
					std::cout << ".0";
				std::cout << std::endl;
			}
		}
		else
			throw this->impossibleException;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}