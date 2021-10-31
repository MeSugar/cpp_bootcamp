#include "span.hpp"

Span::Span(unsigned int N) : _N(N)
{
	// std::cout << "Span default constructor called" << std::endl;
}

Span::Span(Span const &src) : _N(src._N)
{
	// std::cout << "Span copy constructor called" << std::endl;
	*this = src;
}

Span::~Span(void)
{
	// std::cout << "Span destructor called" << std::endl;
}

Span &Span::operator=(Span const &src)
{
	// std::cout << "Span assignation operator called" << std::endl;
	this->_array = src._array;
	this->_N = src._N;
	return (*this);
}

//Methods
void Span::printArray(void) const
{
	std::vector<int>::const_iterator it;
	std::vector<int>::const_iterator ite = this->_array.end();

	for (it = this->_array.begin(); it != ite; it++)
		std::cout << *it << std::endl;
}

void	Span::addNumber(int const number)
{
	try
	{
		if (this->_array.size() < this->_N)
			this->_array.push_back(number);
		else
			throw Span::NoSpaceInContainer();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	Span::addNumbers(unsigned int begin, unsigned int end, int number)
{
	try
	{
		// std::cout << end - begin << " " << begin << " " << end << " " << this->_N << std::endl; 
		if (begin > end)
			throw Span::WrongRage();
		if (this->_array.size() + end - begin <= this->_N && end <= this->_N)
		{
			// std::cout << this->_array[0] << std::endl;
			for (unsigned int i = begin; i < end; i++)
				this->_array.push_back(number);
		}
		else
			throw Span::NoSpaceInContainer();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}

int	Span::shortestSpan(void) const
{
	try
	{
		if (this->_array.size() >= 2)
		{
			std::vector<int> tmp = this->_array;
			std::sort(tmp.begin(), tmp.end());
			std::vector<int>::const_iterator it = tmp.begin();
			int res = *(it + 1) - *it;
			// std::cout << res << std::endl;
			for ( ; it < tmp.end() - 1; it++)
				if (*(it + 1) - *it < res)
				{
					res = *(it + 1) - *it;
					// std::cout << res << std::endl;
				}
			return (res);
		}
		else
			throw Span::NoSpanCanBeFound();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		std::cerr << "Span returned: ";
		return (-1);
	}
}

int	Span::longestSpan(void) const
{
	try
	{
		if (this->_array.size() >= 2)
		{
			int max = *std::max_element(this->_array.begin(), this->_array.end());
			int min = *std::min_element(this->_array.begin(), this->_array.end());
			return (max - min);
		}
		else
			throw Span::NoSpanCanBeFound();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		std::cerr << "Span returned: ";
		return (-1);
	}
}