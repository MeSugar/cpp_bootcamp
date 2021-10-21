#include "Form.hpp"

Form::Form(std::string name, const int gts, const int gte)
: _name(name), _signed(false), _gradeToSign(gts), _gradeToExec(gte)
{
	std::cout << "Form default constructor called" << std::endl;
	if (getGradeToSign() > 150)
		throw this->GradeTooLowException;
	else if (getGradeToSign() < 1)
		throw this->GradeTooHighException;
	else if (getGradeToExec() > 150)
		throw this->GradeTooLowException;
	else if (getGradeToExec() < 1)
		throw this->GradeTooHighException;
}

Form::Form(Form const &src)
: _name(src.getName()), _signed(src._signed), _gradeToSign(src._gradeToSign), _gradeToExec(src._gradeToExec)
{
	std::cout << "Form copy constructor called" << std::endl;
	*this = src;
}

Form::~Form(void)
{
	std::cout << "Form destructor called" << std::endl;
}

Form &Form::operator=(Form const &src)
{
	std::cout << "Form assignation operator called" << std::endl;
	this->_signed = src.getSign();
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Form const &src)
{
	if (src.getSign())
		o << src.getName() << " is signed! The grade required to execute: " << src.getGradeToExec();
	else
		o << src.getName() << " is not signed! The grade required to sign it: " << src.getGradeToSign() <<
			". The grade required to execute it: " << src.getGradeToExec();
	return (o);
}

//Methods
std::string	Form::getName(void) const
{
	return (this->_name);
}

bool	Form::getSign(void) const
{
	return (this->_signed);
}

int		Form::getGradeToSign(void) const
{
	return (this->_gradeToSign);
}

int		Form::getGradeToExec(void) const
{
	return (this->_gradeToExec);
}

void	Form::beSigned(Bureaucrat &applicant)
{
	if (applicant.getGrade() <= this->getGradeToSign())
		this->_signed = true;
	else
		throw this->GradeTooLowException;
}

void	Form::beExecuted(Bureaucrat const &executor) const
{
	if (this->getSign())
	{
		if (executor.getGrade() <= this->getGradeToExec())
		{
			try
			{
				this->execute(executor);
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << std::endl;
			}
		}
		else
			throw executor.GradeTooLowException;
	}
	else
		throw executor.UnsignedForm;
}