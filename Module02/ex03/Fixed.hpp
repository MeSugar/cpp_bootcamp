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

	bool	operator>(Fixed const &src) const;
	bool	operator<(Fixed const &src) const;
	bool	operator>=(Fixed const &src) const;
	bool	operator<=(Fixed const &src) const;
	bool	operator==(Fixed const &src) const;
	bool	operator!=(Fixed const &src) const;
	
	Fixed	operator+(Fixed const &src) const;
	Fixed	operator-(Fixed const &src) const;
	Fixed	operator*(Fixed const &src) const;
	Fixed	operator/(Fixed const &src) const;

	Fixed 	&operator++(void);
	Fixed 	operator++(int);
	Fixed 	&operator--(void);
	Fixed 	operator--(int);

	int 	getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

	static Fixed			&min(Fixed &src1, Fixed &src2);
	static const Fixed		&min(Fixed const &src1, Fixed const &src2);
	static Fixed			&max(Fixed &src1, Fixed &src2);
	static const Fixed		&max(Fixed const &src1, Fixed const &src2);
};

std::ostream & operator<<(std::ostream & o, Fixed const & src);

#endif