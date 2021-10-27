#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <exception>
#include <typeinfo>

class Base
{
	public:
	virtual ~Base () {}
};

class A : public Base
{
	public:
	A(void)
	{
		std::cout << "A class object is instanciated" << std::endl;
	}
	void printTypeA(void)
	{
		std::cout << "Derived class type is: A" << std::endl;
	}
};

class B : public Base
{
	public:
	B(void)
	{
		std::cout << "B class object is instanciated" << std::endl;
	}
	void printTypeB(void)
	{
		std::cout << "Derived class type is: B" << std::endl;
	}
};

class C : public Base
{
	public:
	C(void)
	{
		std::cout << "C class object is instanciated" << std::endl;
	}
	void printTypeC(void)
	{
		std::cout << "Derived class type is: C" << std::endl;
	}
};

Base * generate(void)
{
	Base *basePtr;
	int number;

	srand(time(NULL));
	number = rand() % 3;
	switch (number)
	{
	case 0:
		basePtr = new A();
		break;
	case 1:
		basePtr = new B();
		break;
	case 2:
		basePtr = new C();
		break;
	}
	return (basePtr);
}

void identify(Base* p)
{
	A *objA;
	B *objB;
	C *objC;

	objA = dynamic_cast<A *>(p);
	objB = dynamic_cast<B *>(p);
	objC = dynamic_cast<C *>(p);

	if (objA)
		objA->printTypeA();
	if (objB)
		objB->printTypeB();
	if (objC)
		objC->printTypeC();
}

void identify(Base& p)
{
	try
	{
		A& objA = dynamic_cast<A &>(p);
		objA.printTypeA();
	}
	catch(std::bad_cast& bc)
	{
	}
	try
	{
		B& objB = dynamic_cast<B &>(p);
		objB.printTypeB();
	}
	catch(std::bad_cast& bc)
	{
	}
	try
	{
		C& objC = dynamic_cast<C &>(p);
		objC.printTypeC();
	}
	catch(std::bad_cast& bc)
	{
	}
}

int main()
{
	Base *basePtr;

	basePtr = generate();
	identify(basePtr);
	identify(*basePtr);
	return 0;
}