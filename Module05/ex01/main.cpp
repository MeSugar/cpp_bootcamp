#include "Bureaucrat.hpp"

int main()
{
	{
		try
		{
			Form f1("Form #1", 1111, 1);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			Form f1("Form #1", 1, 1);
			Form f2("Form #2", 10, 10);
			Bureaucrat b1("Dick", 2);

			std::cout << f1 << std::endl;
			std::cout << f2 << std::endl;
			
			b1.signForm(f1);
			b1.signForm(f2);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	return  0;
}