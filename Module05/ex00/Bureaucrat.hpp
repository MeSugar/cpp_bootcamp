#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>
#include <exception>



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

	class GradeTooHighEx : public std::exception
	{
		public:
		virtual const char* what() const throw()
		{
			return ("The grade is too high!");
		}
	} GradeTooHighException;
	
	class GradeTooLowEx : public std::exception
	{
		public:
		virtual const char* what() const throw()
		{
			return ("The grade is too low!");
		}
	} GradeTooLowException;
};

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &src);

#endif