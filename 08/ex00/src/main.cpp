#include "easyfind.hpp"
#include <vector>
#include <list>
#include <iostream>

int	main( void )
{
	int	int_array[] = { 16, 2, 77, 29, 42, 8, 666 };

	std::vector<int>	vector(int_array, int_array + sizeof(int_array) / sizeof(int));
	std::list<int>		list(int_array, int_array + 5);

	std::cout << "int\t\t\tint_array[] = { 16, 2, 77, 29, 42, 8, 666 };" << std::endl;
	std::cout << "std::vector<int>\tvector(int_array, int_array + sizeof(int_array) / sizeof(int));" << std::endl;
	std::cout << "std::list<int>\t\tlist(int_array, int_array + 5);" << std::endl;
	std::cout << std::endl;

	{
		std::cout << "-----------------------------------" << std::endl;
		std::cout << "| TEST 1: easyfind(container, 42) |" << std::endl;
		std::cout << "-----------------------------------" << std::endl;

		try
		{
			std::cout << "Vector:\t";
			easyfind(vector, 42);
			std::cout << "Element found." << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		try
		{
			std::cout << "List:\t";
			easyfind(list, 42);
			std::cout << "Element found." << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		std::cout << "-----------------------------------" << std::endl;
		std::cout << "| TEST 2: easyfind(container, 666) |" << std::endl;
		std::cout << "-----------------------------------" << std::endl;

		try
		{
			std::cout << "Vector:\t";
			easyfind(vector, 666);
			std::cout << "Element found." << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		try
		{
			std::cout << "List:\t";
			easyfind(list, 666);
			std::cout << "Element found." << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
}
