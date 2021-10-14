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
	return (this->x.toFloat());
}

float Point::getY(void) const
{
	return (this->y.toFloat());
}

static float CalcTriArea(Point const &v1, Point const &v2, Point const &v3)
{
//   float det = 0.0f;

//   det = ((v1.getX() - v3.getX()) * (v2.getY() - v3.getY())) - ((v2.getX() - v3.getX()) * (v1.getY() - v3.getY()));
//   std::cout << det << std::endl;
//   return (det / 2.0f);
	// return (std::abs((v1.getX() * (v2.getY() - v3.getY()) + v2.getX() * (v3.getY() - v1.getY()) + v3.getX() * (v1.getY() - v2.getY()) / 2.0)));
	return (std::abs((v1.getX() * (v2.getY() - v3.getY()) + v2.getX() * (v3.getY() - v1.getY()) + v3.getX() * (v1.getY() - v2.getY())) / 2.0));
}

bool    bsp(Point const a, Point const b, Point const c, Point const point)
{
	float TotalArea = CalcTriArea(a, b, c);
	float Area1 = CalcTriArea(point, b, c);
	float Area2 = CalcTriArea(point, a, c);
	float Area3 = CalcTriArea(point, a, b);

	// std::cout << a.getX() << "   " << (float)a.getY() << std::endl;
	// std::cout << b.getX() << "   " << (float)b.getY() << std::endl;
	// std::cout << c.getX() << "   " << (float)c.getY() << std::endl;
	// std::cout << point.getX() << "   " << (float)point.getY() << std::endl;

	// if((Area1 + Area2 + Area3) > TotalArea)
	// 	return true;
	// else
	// 	return false;
	return (TotalArea == Area1 + Area2 + Area3);
}