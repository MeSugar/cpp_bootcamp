#include "Fixed.hpp"

Fixed::Fixed(void) : fixedValue(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const value)
{
	// std::cout << "Int constructor called" << std::endl;
	this->fixedValue = value << Fixed::width;
}

Fixed::Fixed(float const value)
{
	// std::cout << "Float constructor called" << std::endl;
	this->fixedValue = roundf(value * (1 << Fixed::width));
}

Fixed::Fixed(const Fixed &src)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed(void)
{
	// std::cout << "Destructor called" << std::endl;
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

Fixed &Fixed::operator=(Fixed const &src)
{
	// std::cout << "Assignation operator called" << std::endl;
	this->setRawBits(src.fixedValue);
	return (*this);
}

///Comparison operators

bool	Fixed::operator>(Fixed const &src) const
{
	return (this->getRawBits() > src.getRawBits());
}

bool	Fixed::operator<(Fixed const &src) const
{
	return (this->getRawBits() < src.getRawBits());
}

bool	Fixed::operator>=(Fixed const &src) const
{
	return (this->getRawBits() >= src.getRawBits());
}

bool	Fixed::operator<=(Fixed const &src) const
{
	return (this->getRawBits() <= src.getRawBits());
}

bool	Fixed::operator==(Fixed const &src) const
{
	return (this->getRawBits() == src.getRawBits());
}

bool	Fixed::operator!=(Fixed const &src) const
{
	return (this->getRawBits() != src.getRawBits());
}

///Math operators

Fixed Fixed::operator+(Fixed const &src) const
{
	return (Fixed(this->fixedValue + src.getRawBits()));
}

Fixed Fixed::operator-(Fixed const &src) const
{
	return (Fixed(this->fixedValue - src.getRawBits()));
}

Fixed Fixed::operator*(Fixed const &src) const
{
	
	return (Fixed(this->toFloat() * src.toFloat()));
}

Fixed Fixed::operator/(Fixed const &src) const
{
	return (Fixed(this->toFloat() / src.toFloat()));
}

///Increment/decrement operators

Fixed &Fixed::operator++(void)
{
	this->fixedValue++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	this->fixedValue++;
	return (tmp);
}

Fixed &Fixed::operator--(void)
{
	this->fixedValue++;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	this->fixedValue--;
	return (tmp);
}

///Comparison funcs
Fixed	&Fixed::min(Fixed &src1, Fixed &src2)
{
	return (src1 < src2 ? src1 : src2);
}

 const Fixed	&Fixed::min(Fixed const &src1, Fixed const &src2)
{
	return (src1 < src2 ? src1 : src2);
}

Fixed	&Fixed::max(Fixed &src1, Fixed &src2)
{
	return (src1 > src2 ? src1 : src2);
}

const Fixed	&Fixed::max(Fixed const &src1, Fixed const &src2)
{
	return (src1 > src2 ? src1 : src2);
}

///Output operator
std::ostream & operator<<(std::ostream & o, Fixed const & src)
{
	o << src.toFloat();
	return (o);
}
