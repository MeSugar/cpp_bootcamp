#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed
{
private:
    int fixedValue;
    static const int width = 8;
public:
	Fixed(void);
    Fixed(const Fixed &src);
	~Fixed(void);

    Fixed   &operator=(Fixed const &src);
	int 	getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif