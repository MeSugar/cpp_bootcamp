#ifndef ARRAY_H
# define ARRAY_H

#include <iostream>
#include <exception>

template <typename T>
class Array
{
	private:
		T* _array;
		unsigned int _size;
	public:
		Array<T>(void) {_array = new T[](); }
		Array<T>(unsigned int n) { _array = new T[n]; _size = n; }
		Array<T>(Array const & src) {*this = src;}
		Array	&operator=(Array const &src)
		{
			_array = new T[src.size()]();
			for (unsigned int i = 0; i < src.size(); i++)
				_array[i] = src._array[i];
			_size = src.size();
			return *this;
		}
		T	& operator[](unsigned int i) const
		{ 
			if (i >= size())
				throw AccessError;
			return (_array[i]);
		}
		unsigned int size(void) const { return _size; }

	class AccessE : public std::exception
	{
		public:
		virtual const char* what() const throw()
		{
			return ("Access error");
		}
	} AccessError;
};	

template <typename T>
std::ostream & operator<<(std::ostream & o, Array<T> const & a)
{ 
	for (unsigned int i = 0; i < a.size(); i++)
		o << a[i] << " ";
	return o;
}


#endif