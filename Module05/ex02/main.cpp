#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	{
		try
		{
			Form *f1 = new ShrubberyCreationForm("Home");
			Bureaucrat b1("Dick", 2);
			Bureaucrat b2("Mick", 150);
			b2.signForm(*f1);
			b1.executeForm(*f1);
			b1.signForm(*f1);
			b2.executeForm(*f1);
			b1.executeForm(*f1);
			delete f1;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			Form *f1 = new RobotomyRequestForm("Robo");
			Bureaucrat b1("Dick", 2);
			Bureaucrat b2("Mick", 150);
			b2.signForm(*f1);
			b1.executeForm(*f1);
			b1.signForm(*f1);
			b2.executeForm(*f1);
			b1.executeForm(*f1);
			delete f1;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			Form *f1 = new PresidentialPardonForm("Robo");
			Bureaucrat b1("Dick", 2);
			Bureaucrat b2("Mick", 150);
			b2.signForm(*f1);
			b1.executeForm(*f1);
			b1.signForm(*f1);
			b2.executeForm(*f1);
			b1.executeForm(*f1);
			delete f1;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
	}
	return  0;
}