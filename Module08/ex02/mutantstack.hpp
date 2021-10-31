#ifndef MUTANT_STACK_H
# define MUTANT_STACK_H

#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <sstream>

template <class T>
class MutantStack : public std::stack<T>
{
	private:
	public:
		MutantStack<T>(void) {}
		MutantStack<T>(MutantStack const &src) : std::stack<T>(src) {}
		virtual ~MutantStack<T>(void) {}
		MutantStack &operator=(MutantStack<T> const &src) { std::stack<T>::operator=(src); }

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin(void) { return (std::stack<T>::c.begin()); }
		iterator end(void) { return (std::stack<T>::c.end()); }
};

#endif