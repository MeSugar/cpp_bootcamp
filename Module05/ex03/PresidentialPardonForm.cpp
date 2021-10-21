#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 72, 45), _target(target)
{
	std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : Form(src)
{
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &src)
{
	std::cout << "PresidentialPardonForm assignation operator called" << std::endl;
	this->_target = src._target;
	return (*this);
}

//Methods
void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox!" << std::endl;
	(void)executor;
}