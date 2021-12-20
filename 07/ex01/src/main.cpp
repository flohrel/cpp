#include "iter.hpp"
#include <iostream>

template< typename T >
void	increment( T& arg )
{
	arg += 1;
}

int	main( void )
{
	int		array[100];
	char	str[12] = "Hello world";

	for (size_t i = 0; i < 100; i++)
	{
		array[i] = i;
	}
	/*
	**	TEST:
	*/
		{
			std::cout << "--------" << std::endl;
			std::cout << "| TEST |" << std::endl;
			std::cout << "--------" << std::endl;
			std::cout << "-> Before:" << std::endl;
			std::cout << "array[0] = " << array[10] << std::endl;
			std::cout << "str = \"" << str << "\"" << std::endl << std::endl;
			std::cout << "-> After iter + increment:" << std::endl;
			::iter<int>(array, 100, increment<int>);
			::iter<char>(str, 11, increment<char>);
			std::cout << "array[0] = " << array[10] << std::endl;
			std::cout << "str = \"" << str << "\"" << std::endl;;
		}
		std::cout << std::endl;
}