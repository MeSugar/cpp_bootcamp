#ifndef ROBOTOMY_REQUEST_FORM_H
# define ROBOTOMY_REQUEST_FORM_H

#include "Form.hpp"
#include <stdlib.h>

class RobotomyRequestForm;

class RobotomyRequestForm : public Form
{
private:
	std::string	_target;
public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const &src);
	virtual ~RobotomyRequestForm(void);
	RobotomyRequestForm		&operator=(RobotomyRequestForm const &src);

	class RoboFail : public std::exception
	{
		public:
		virtual const char* what() const throw()
		{
			return ("Robotization failed!");
		}
	} RobotomizationFail;

	void	execute(Bureaucrat const & executor) const;
};

#endif