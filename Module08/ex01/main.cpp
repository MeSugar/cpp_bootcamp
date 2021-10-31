#include "span.hpp"

int main()
{
	Span a(5);
	a.addNumber(5);
	a.addNumber(3);
	a.addNumber(17);
	a.addNumber(9);
	a.addNumber(11);
	a.printArray();
	a.addNumber(11);
	std::cout << "Shortest span is: "<< a.shortestSpan() << std::endl;
	std::cout << "Longest span is: " << a.longestSpan() << std::endl;
	
	Span b(5);
	b.addNumber(-5);
	b.addNumber(-4);
	b.addNumber(17);
	// b.addNumber(9);
	std::cout << "Shortest span is: " << b.shortestSpan() << std::endl;
	b.addNumbers(3, 5, 33);
	b.printArray();
	std::cout << "Shortest span is: "<< b.shortestSpan() << std::endl;


	Span c(10000);
	c.addNumbers(1, 9999, 333);
	c.addNumbers(9999, 10000, -335);
	c.printArray();
	std::cout << "Longest span is: " << c.longestSpan() << std::endl;
	std::cout << "Shortest span is: "<< c.shortestSpan() << std::endl;
	
}