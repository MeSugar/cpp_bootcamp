#include "Intern.hpp"

Intern::Intern(void)
{
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(Intern const &src)
{
	std::cout << "Intern copy constructor called" << std::endl;
	*this = src;
}

Intern::~Intern(void)
{
	std::cout << "Intern destructor called" << std::endl;
}

Intern &Intern::operator=(Intern const &src)
{
	std::cout << "Intern assignation operator called" << std::endl;
	(void)src;
	return (*this);
}

//Methods

Form	*Intern::createPresidentialPardonForm(std::string const &target)
{
	return (new PresidentialPardonForm(target));
}

Form	*Intern::createRobotomyRequestForm(std::string const &target)
{
	return (new RobotomyRequestForm(target));
}

Form	*Intern::createShrubberyCreationForm(std::string const &target)
{
	return (new ShrubberyCreationForm(target));
}

int	Intern::findForm(std::string const &form) const
{
	std::string const formsList[] = { "presidential pardon", "robotomy request", "shrubbery creation" };
	for (int i = 0; i < 3; i++)
	{
		if (formsList[i] == form)
			return (i);
	}
	return (-1);
}

Form	*Intern::makeForm(std::string const &form, std::string const &target)
{
	Form *(Intern::*foo[])(std::string const &target) = 
	{	&Intern::createPresidentialPardonForm,
		&Intern::createRobotomyRequestForm,
		&Intern::createShrubberyCreationForm
	};
	switch (this->findForm(form))
	{
		case 0:
			return (this->*foo[0])(target);
		case 1:
			return (this->*foo[1])(target);
		case 2:
			return (this->*foo[2])(target);
		default:
			throw this->findFormFail;
	}
}

