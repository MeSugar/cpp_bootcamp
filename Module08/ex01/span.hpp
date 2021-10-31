#ifndef SPAN_H
# define SPAN_H

#include <iostream>
#include <vector>
#include <algorithm>


class Span
{
	private:
		unsigned int		_N;
		std::vector<int>	_array;
	public:
		Span(unsigned int N);
		Span(Span const &src);
		~Span();
		Span &operator=(Span const &src);

		void			printArray(void) const;
		void			addNumber(int const number);
		void			addNumbers(unsigned int begin, unsigned int end, int number);
		int				shortestSpan(void) const;
		int				longestSpan(void) const;

		class NoSpaceInContainer : public std::exception
		{
			public:
			virtual const char* what() const throw()
			{
				return ("The container is full. No elements can be added");
			}
		};
		class NoSpanCanBeFound : public std::exception
		{
			public:
			virtual const char* what() const throw()
			{
				return ("Span cannot be found. The container has no or only 1 element");
			}
		};
		class WrongRage : public std::exception
		{
			public:
			virtual const char* what() const throw()
			{
				return ("Invalid range");
			}
		};   
};




#endif