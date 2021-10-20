#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	std::string const	_name;
	int					_grade;
public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const &src);
	~Bureaucrat(void);
	Bureaucrat		&operator=(Bureaucrat const &src);

	std::string	getName(void) const;
	int			getGrade(void) const;
	void		incrGrade(void);
	void		decrGrade(void);
	void		signForm(Form &form);

	class GradeTooHighEx : public std::exception
	{
		public:
		virtual const char* what() const throw()
		{
			return ("Bureaucrat's grade is too high!");
		}
	} GradeTooHighException;
	
	class GradeTooLowEx : public std::exception
	{
		public:
		virtual const char* what() const throw()
		{
			return ("Bureaucrat's grade is too low!");
		}
	} GradeTooLowException;
};

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &src);

#endif