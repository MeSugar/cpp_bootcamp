#include "mutantstack.hpp"

int main()
{
	{
		std::cout << "test SUBJECT------------------" << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();

		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	{
		std::cout << std::endl << "test MINE------------------" << std::endl;
		MutantStack<std::string> s1;
		

		for (int i = 0; i < 10; i++)
		{
			std::stringstream ss;
			ss << i;
			s1.push("String #" + ss.str());
		}
		MutantStack<std::string>::iterator it1 = s1.end();
		for (MutantStack<std::string>::iterator it2 = s1.begin(); it2 != it1; it2++)
		{
			std::cout << *it2 << std::endl;
		}
		std::cout << std::endl << "Pritnt the strings backwards:";
		it1 = s1.begin();
		for (MutantStack<std::string>::iterator it2 = s1.end(); it2 != it1; it2--)
		{
			std::cout << *it2 << std::endl;
		}
	}
	
	return 0;
}
