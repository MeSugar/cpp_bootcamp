#ifndef INTERN_H
# define INTERN_H

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
private:
public:
	Intern();
	Intern(Intern const &src);
	~Intern(void);
	Intern		&operator=(Intern const &src);
	
	Form	*makeForm(std::string const &form, std::string const &target);
	int		findForm(std::string const &form) const;

	Form	*createPresidentialPardonForm(std::string const &target);
	Form	*createRobotomyRequestForm(std::string const &target);
	Form	*createShrubberyCreationForm(std::string const &target);

	class findForm : public std::exception
	{
		public:
		virtual const char* what() const throw()
		{
			return ("Intern cannot find the requested form! Patience you must have my young padawan!");
		}
	} findFormFail;

};

#endif