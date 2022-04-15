#include <cstdlib>
#include <time.h>
#include <exception>
#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*list[3] = { new A, new B, new C };

Base*	generate( void )
{
	srand(time(NULL));
	return (list[rand() % 3]);
}

void	identify( Base* p )
{
	A*	a = NULL;
	B*	b = NULL;
	C*	c = NULL;

	a = dynamic_cast<A*>(p);
	if (a)
		std::cout << "A" << std::endl;
	b = dynamic_cast<B*>(p);
	if (b)
		std::cout << "B" << std::endl;
	c = dynamic_cast<C*>(p);
	if (c)
		std::cout << "C" << std::endl;
}

void	identify( Base& p )
{
	A	a;
	B	b;
	C	c;

	try
	{
		a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch (const std::exception& e)
	{
	}
	try
	{
		b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch (const std::exception& e)
	{
	}
	try
	{
		c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch (const std::exception& e)
	{
	}
}

int	main( void )
{
	Base* p;

	p = generate();
	identify(p);
	identify(*p);
	for (int i = 0; i < 3; i++)
		delete (list[i]);
	return (0);
}