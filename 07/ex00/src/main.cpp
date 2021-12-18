#include "whatever.hpp"
#include <iostream>

int	main( void )
{
	int			a = 42, b = 21;
	float		c = 42.42, d = 21.21;
	std::string	e = "Foo", f = "Bar";

	std::cout << "int a = " << a << std::endl;
	std::cout << "int b = " << b << std::endl;
	std::cout << "float c = " << c << std::endl;
	std::cout << "float d = " << d << std::endl;
	std::cout << "std::string e = \"" << e << "\"" << std::endl;
	std::cout << "std::string f = \"" << f << "\"" << std::endl;
	std::cout << std::endl;

	/*
	**	TEST 1: swap test
	*/
		{
			std::cout << "---------------------------------" << std::endl;
			std::cout << "| TEST 1: swap<T>( T& a, T& b ) |" << std::endl;
			std::cout << "---------------------------------" << std::endl;
			swap<int>(a, b);
			std::cout << "-> swap(a, b)" << std::endl;
			std::cout << "a = " << a << std::endl;
			std::cout << "b = " << b << std::endl;
			swap<float>(c, d);
			std::cout << "-> swap(c, d)" << std::endl;
			std::cout << "c = " << c << std::endl;
			std::cout << "d = " << d << std::endl;
			::swap<std::string>(e, f);
			std::cout << "-> swap(e, f)" << std::endl;
			std::cout << "e = " << e << std::endl;
			std::cout << "f = " << f << std::endl;
		}
		std::cout << std::endl;

	/*
	**	TEST 2
	*/
		{
			std::cout << "--------------------------------------------" << std::endl;
			std::cout << "| TEST 2: min<T>( T const& a, T const& b ) |" << std::endl;
			std::cout << "--------------------------------------------" << std::endl;
			std::cout << "=> min(a, b) = " << min<int>(a, b) << std::endl;
			std::cout << "=> min(c, d) = " << min<float>(c, d) << std::endl;
			std::cout << "=> min(e, f) = " << ::min<std::string>(e, f) << std::endl;
		}
		std::cout << std::endl;

	/*
	**	TEST 3
	*/
		{
			std::cout << "--------------------------------------------" << std::endl;
			std::cout << "| TEST 3: max<T>( T const& a, T const& b ) |" << std::endl;
			std::cout << "--------------------------------------------" << std::endl;
			std::cout << "=> max(a, b) = " << max<int>(a, b) << std::endl;
			std::cout << "=> max(c, d) = " << max<float>(c, d) << std::endl;
			std::cout << "=> max(e, f) = " << ::max<std::string>(e, f) << std::endl;
		}
		std::cout << std::endl;

}