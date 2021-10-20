#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
	if (getGrade() > 150)
		throw this->GradeTooLowException;
	else if (getGrade() < 1)
		throw this->GradeTooHighException;
	else
		std::cout << *this << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : _name(src.getName()), _grade(src.getGrade())
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = src;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &src)
{
	std::cout << "Bureaucrat assignation operator called" << std::endl;
	this->_grade = src.getGrade();
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &src)
{
	o << src.getName() << " has " << src.getGrade() << " grade";
	return (o);
}


//Methods
std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

int		Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::incrGrade(void)
{
	this->_grade--;
	if (getGrade() < 1)
		throw this->GradeTooHighException;
	else
		std::cout << *this << std::endl;
	
}

void	Bureaucrat::decrGrade(void)
{
	this->_grade++;
	if (getGrade() > 150)
		throw this->GradeTooLowException;
	else
		std::cout << *this << std::endl;
}