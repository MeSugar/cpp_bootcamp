#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>

class Brain
{
protected:
	std::string	ideas[100];
public:
	Brain(void);
	Brain(Brain const &src);
	~Brain(void);
	Brain	&operator=(Brain const &src);

	void setIdeas(std::string const &word);
	std::string &getIdea(int indx);

};

#endif