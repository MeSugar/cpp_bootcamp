#ifndef PRESIDENTIAL_PARDON_FORM_H
# define PRESIDENTIAL_PARDON_FORM_H

#include "Form.hpp"

class PresidentialPardonForm;

class PresidentialPardonForm : public Form
{
private:
	std::string	_target;
public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const &src);
	virtual ~PresidentialPardonForm(void);
	PresidentialPardonForm		&operator=(PresidentialPardonForm const &src);

	void	execute(Bureaucrat const & executor) const;
};

#endif