#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : Form(src)
{
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src)
{
	std::cout << "ShrubberyCreationForm assignation operator called" << std::endl;
	this->_target = src._target;
	return (*this);
}

//Methods
void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::string str = this->_target + "_shrubbery";
	std::ofstream ofs(str.c_str());
	if (!ofs.is_open())
		throw this->OpenFileFail;
	ofs << "       /\\       " << std::endl;      
	ofs << "      /\\*\\      " << std::endl;
	ofs << "     /\\O\\*\\     " << std::endl;
	ofs << "    /*/\\/\\/\\    " << std::endl;
	ofs << "   /\\O\\/\\*\\/\\   " << std::endl;
	ofs << "  /\\*\\/\\*\\/\\/\\  " << std::endl;
	ofs << " /\\O\\/\\/*/\\/O/\\ " << std::endl;
	ofs << "       ||       " << std::endl;
	ofs << "       ||       " << std::endl;
	ofs.close();
	(void)executor;
}