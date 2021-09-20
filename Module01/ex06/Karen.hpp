#ifndef KAREN_H
# define KAREN_H

#include <iostream>

class Karen
{
private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	int		setLevel(std::string level);
	void	printOut(void (Karen::*foo[])(), int i);
public:
	Karen(void);
	~Karen(void);

	void	complain(std::string level);
};

void printer(void (Karen::*foo)());

#endif