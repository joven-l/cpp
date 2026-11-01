#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"
#include <iostream>
#include <cstdlib>

Base * generate(void)
{
	srand(time(NULL));
	int num = rand() % 3;

	switch (num)
	{
		case 0:
			return (new A());
		case 1:
			return (new B());
		case 2:
			return (new C());
	}
	return (NULL);
}

void identify(Base* p)
{
	std::cout << "ptr is type: ";
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "A";
	if (dynamic_cast<B *>(p) != NULL)
		std::cout << "B";
	if (dynamic_cast<C *>(p) != NULL)
		std::cout << "C";

	std::cout << std::endl;
}

void identify(Base& p)
{
	std::cout << "reference is type: ";
	try
	{
		dynamic_cast<A &>(p);
		std::cout << "A";
	}
	catch(...)
	{
	}
	try
	{
		dynamic_cast<B &>(p);
		std::cout << "B";
	}
	catch(...)
	{
	}
	try
	{
		dynamic_cast<C &>(p);
		std::cout << "C";
	}
	catch(...)
	{
	}
	std::cout << std::endl;
}

int	main(void)
{
	{
		Base *p = generate();
		identify(p);
		identify(*p);
		delete (p);
	}
	return (0);
}
