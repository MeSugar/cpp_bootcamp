#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int					fixedValue;
	static const int	width = 8;
public:
	Fixed(void);
	Fixed(int const value);
	Fixed(float const value);
	Fixed(const Fixed &src);
	~Fixed(void);

	Fixed	&operator=(Fixed const &src);
	int 	getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream & operator<<(std::ostream & o, Fixed const & src);

#endif