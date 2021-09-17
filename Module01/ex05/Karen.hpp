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
public:
	Karen(void);
	~Karen(void);

	void	complain(std::string level);
};

void printer(void (Karen::*foo)());

#endif