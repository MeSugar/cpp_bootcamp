#ifndef WHATEVER_H
# define WHATEVER_H

#include <iostream>

template <typename T>
void	swap(T & x, T & y)
{
	T z = x;
	x = y;
	y = z;
}

template <typename T>
T const & max(T const & x, T const & y)
{
	return (x > y ? x : y);
}

template <typename T>
T const & min(T const & x, T const & y)
{
	return (x < y ? x : y);
}

class Awesome
{
	private:
		int _n;
	public:
		Awesome(void) : _n(0) {}
		Awesome(int n) : _n(n) {}
		Awesome &	operator=(Awesome &a) { _n = a._n; return *this; }
		bool		operator==(Awesome const &rhs) const {return (this->_n == rhs._n); }
		bool		operator!=(Awesome const &rhs) const {return (this->_n != rhs._n); }
		bool		operator>(Awesome const &rhs) const {return (this->_n > rhs._n); }
		bool		operator<(Awesome const &rhs) const {return (this->_n < rhs._n); }
		bool		operator>=(Awesome const &rhs) const {return (this->_n >= rhs._n); }
		bool		operator<=(Awesome const &rhs) const {return (this->_n <= rhs._n); }
		int get_n(void) const {return _n; }
};

std::ostream & operator<<(std::ostream & o, Awesome const & a) { o << a.get_n(); return o; }

#endif