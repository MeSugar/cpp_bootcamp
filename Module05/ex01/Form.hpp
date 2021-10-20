#ifndef FORM_H
# define FORM_H

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	std::string const	_name;
	bool				_signed;
	int			const	_gradeToSign;
	int			const	_gradeToExec;
public:
	Form(std::string name, const int, const int);
	Form(Form const &src);
	~Form(void);
	Form		&operator=(Form const &src);

	std::string	getName(void) const;
	bool		getSign(void) const;
	int			getGradeToSign(void) const;
	int			getGradeToExec(void) const;
	void		beSigned(Bureaucrat &);

	class GradeTooHighEx : public std::exception
	{
		public:
		virtual const char* what() const throw()
		{
			return ("Form's grade is too high!");
		}
	} GradeTooHighException;

	class GradeTooLowEx : public std::exception
	{
		public:
		virtual const char* what() const throw()
		{
			return ("Form's grade is too low!");
		}
	} GradeTooLowException;

};

std::ostream	&operator<<(std::ostream &o, Form const &src);

#endif