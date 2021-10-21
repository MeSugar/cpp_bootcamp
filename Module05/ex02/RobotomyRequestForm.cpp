#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form(src)
{
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &src)
{
	std::cout << "RobotomyRequestForm assignation operator called" << std::endl;
	this->_target = src._target;
	return (*this);
}

//Methods
void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	srand(time(NULL));
	std::cout << "D-d-drrrrrrrrr..." << std::endl;
	if(rand() % 2)
		std::cout << executor.getName() << " has been robotomized successfully!" << std::endl;
  	else
    	throw this->RobotomizationFail;
}