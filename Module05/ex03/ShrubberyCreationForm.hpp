#ifndef SHRUBBERY_CREATION_FORM_H
# define SHRUBBERY_CREATION_FORM_H

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm;

class ShrubberyCreationForm : public Form
{
private:
	std::string	_target;
public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const &src);
	virtual ~ShrubberyCreationForm(void);
	ShrubberyCreationForm		&operator=(ShrubberyCreationForm const &src);

	class OpenFile : public std::exception
	{
		public:
		virtual const char* what() const throw()
		{
			return ("Error: Cannot create file!");
		}
	} OpenFileFail;

	void	execute(Bureaucrat const & executor) const;
};

#endif