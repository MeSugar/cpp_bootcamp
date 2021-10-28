#include "Array.hpp"

int main()
{
	Array<int> a(10);
	for (int i = 0; i < 10; i++)
		a[i] = i + 1;
	std::cout << "Original 'a' Array" << std::endl;
	std::cout << a << std::endl;
	try
	{
		std::cout << "Trying to access 11s element of the 'a' Array carrying " << a.size() << " elements" << std::endl;
		std::cout << a[11] << std:: endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "Copying 'a' Array to 'b' Array..." << std::endl;
	Array<int> b(a);
	std::cout << "'b' Array before changes" << std::endl;
	std::cout << b << std::endl;
	for (int i = 0; i < 10; i++)
		b[i] *= 2;
	std::cout << "'b' Array after multiplication of it's elements" << std::endl;
	std::cout << b << std::endl;
	std::cout << "'a' Array after 'b' Array has been changed" << std::endl;
	std::cout << a << std::endl;
	

	return 0;
}