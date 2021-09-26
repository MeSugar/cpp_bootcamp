#include "Point.hpp"

Point::Point(void) : x(0), y(0)
{
}

Point::Point(Point &src) : x(src.x), y(src.y)
{
	// *this = src;
}

Point::Point(Fixed &x, Fixed &y) : x(x), y(y)
{
}

Point::~Point(void)
{
}

Point   &Point::operator=(Point const &)
{
	return (*this);
}

float Point::getX(void) const
{
	return ((float)this->x.getRawBits() / (float)(1 << 8));
}

float Point::getY(void) const
{
	return ((float)this->y.getRawBits() / (float)(1 << 8));
}

static float CalcTriArea(Point const &v1, Point const &v2, Point const &v3)
{
  float det = 0.0f;

  det = ((v1.getX() - v3.getX()) * (v2.getY() - v3.getY())) - ((v2.getX() - v3.getX()) * (v1.getY() - v3.getY()));
  return (det / 2.0f);
}

bool    bsp(Point const a, Point const b, Point const c, Point const point)
{
	float TotalArea = CalcTriArea(a, b, c);
	float Area1 = CalcTriArea(point, b, c);
	float Area2 = CalcTriArea(point, a, c);
	float Area3 = CalcTriArea(point, a, b);

	if((Area1 + Area2 + Area3) > TotalArea)
		return false;
	else
		return true;
}