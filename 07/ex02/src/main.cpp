#include <iostream>
#include "Array.hpp"

int	main( void )
{
	Array<int>			count(10);
	Array<int>			count2(10);
	Array<std::string>	str(1);

	for (int i = 0; i < 10; i++)
	{
		count[i] = i + 1;
		count2[i] = 10 - i;
	}
	str[0] = "Hello world";
	{
		try
		{
			std::cout << str[0] << std::endl;
			std::cout << str[1] << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		for (int i = 0; i < 10; i++)
		{
			std::cout << count[i] << " ";
		}
		std::cout << std::endl;
		count = count2;
		for (int i = 0; i < 10; i++)
		{
			std::cout << count[i] << " ";
		}
	}
}
