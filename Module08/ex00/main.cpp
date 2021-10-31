#include "easyfind.hpp"

int main()
{
	std::list<int>  lst1;
	std::list<int>::const_iterator it;

	lst1.push_back(1);
	lst1.push_back(22);
	lst1.push_back(95);
	lst1.push_back(2);
	lst1.push_back(95);
	easyfind(lst1, 95);
	easyfind(lst1, 88);


}