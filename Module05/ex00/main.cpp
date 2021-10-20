#include "Bureaucrat.hpp"

int main()
{
	{
		try
		{
			Bureaucrat a("dick", 151);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		
	}
	{
		try
		{
			Bureaucrat a("pic", 150);
			try
			{
				a.incrGrade();
				a.decrGrade();
				a.decrGrade();
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << std::endl;
			}
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	return  0;
}