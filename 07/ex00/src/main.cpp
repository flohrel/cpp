#include "whatever.hpp"
#include <iostream>

int	main( void )
{
	int		a = 42, b = 21;
	float	c = 42.42, d = 21.21;

	std::cout << "==> a = " << a << std::endl;
	std::cout << "==> b = " << b << std::endl;
	std::cout << "==> c = " << c << std::endl;
	std::cout << "==> d = " << d << std::endl;
	std::cout << std::endl;

	/*
	**	TEST 1: swap test
	*/
		{
			std::cout << "< TEST 1: swap<T> >" << std::endl;
			swap<int>(&a, &b);
			std::cout << "=> swap(a, b);" << std::endl;
			std::cout << "a = " << a << std::endl;
			std::cout << "b = " << b << std::endl;
			swap<float>(&c, &d);
			std::cout << "=> swap(c, d);" << std::endl;
			std::cout << "c = " << c << std::endl;
			std::cout << "d = " << d << std::endl;
		}
		std::cout << std::endl;

	/*
	**	TEST 2
	*/
		{
			std::cout << "< TEST 2: min<T> >" << std::endl;
			std::cout << "=> min(a, b) = " << min<int>(a, b) << std::endl;
			std::cout << "=> min(c, d) = " << min<float>(c, d) << std::endl;
		}
		std::cout << std::endl;

	/*
	**	TEST 3
	*/
		{
			std::cout << "< TEST 3: max<T> >" << std::endl;
			std::cout << "=> max(a, b) = " << max<int>(a, b) << std::endl;
			std::cout << "=> max(c, d) = " << max<float>(c, d) << std::endl;
		}
		std::cout << std::endl;

}