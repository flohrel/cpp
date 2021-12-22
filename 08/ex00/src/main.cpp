#include "easyfind.hpp"
#include <vector>
#include <iostream>

int	main( void )
{
	int							int_array[] = { 16, 2, 77, 29, 42, 66, 8 };
	std::vector<int>			container(int_array, int_array + sizeof(int_array) / sizeof(int));
	std::vector<int>::iterator	it;

	if ((it = easyfind(container, 42)) != container.end())
		std::cout << "Nombre 42 contenu... Address:\t" << &(*it) << std::endl;
	if ((it = easyfind(container, 34)) == container.end())
		std::cout << "but not 34 !... Address:\t" << &(*it) << std::endl;
	std::cout << "Address of container.end():\t" << &(*container.end()) << std::endl;
}