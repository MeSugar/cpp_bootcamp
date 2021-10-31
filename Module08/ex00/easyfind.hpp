#ifndef EASYFIND_H
# define EASYFIND_H

#include <iostream>
#include <list>
#include <algorithm>

class ElementNotFound : public std::exception
{
    public:
    virtual const char* what() const throw()
    {
        return ("Element not found");
    }
};

template <typename T>
void easyfind(T type, int number)
{
	try
	{
		if (type.end() != std::find(type.begin(), type.end(), number))
			std::cout << "Value " << number << " has been found" << std::endl;
		else
			throw ElementNotFound();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

#endif