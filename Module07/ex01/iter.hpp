#ifndef ITER_H
# define ITER_H

#include <iostream>

template <typename T, typename U, typename V>
void	iter(T & array, U const len, void (*foo)(V))
{
	for (int i = 0; i < len; i++)
		foo(array[i]);
}

template <typename W>
void ft_toupper(W &c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	std::cout << c;
}

template <typename X>
void print(X const &x)
{
	std::cout << x << std::endl;
	return ;
}

class Awesome
{
	private:
		int _n;
	public:
		Awesome(void) : _n(42) { return ;}
		int get(void) const {return this->_n; }
};

std::ostream & operator<<(std::ostream & o, Awesome const & a) { o << a.get(); return o; }


#endif