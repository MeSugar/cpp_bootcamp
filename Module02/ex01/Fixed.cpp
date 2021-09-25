#include "Fixed.hpp"

Fixed::Fixed(void) : fixedValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const value)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixedValue = value << Fixed::width;
}

Fixed::Fixed(float const value)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixedValue = roundf(value * (1 << Fixed::width));
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed &Fixed::operator=(Fixed const &src)
{
	std::cout << "Assignation operator called" << std::endl;
	this->setRawBits(src.fixedValue);
	return (*this);
}

std::ostream & operator<<(std::ostream & o, Fixed const & src)
{
	o << src.toFloat();
	return (o);
}

int	Fixed::getRawBits(void) const
{
	return (this->fixedValue);
}

void	Fixed::setRawBits(int const raw)
{
	this->fixedValue = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->fixedValue / (float)(1 << Fixed::width));
}

int		Fixed::toInt(void) const
{
	return (this->fixedValue >> Fixed::width);
}
