#ifndef POINT_H
# define POINT_H

#include "Fixed.hpp"

class Point
{
private:
	Fixed const x;
	Fixed const y;
public:
	Point(void);
	Point(Point &src);
	Point(Fixed &x, Fixed &y);
	~Point(void);

	Point	&operator=(Point const &);

	float 	getX(void) const;
	float 	getY(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream & operator<<(std::ostream & o, Point const & src);
bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif