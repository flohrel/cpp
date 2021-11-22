#include "Animal.hpp"
//#include "Dog.hpp"
#include "Cat.hpp"

int	main( void )
{
	Cat const* cat1 = new Cat();
	Cat const* cat2 = new Cat();
	cat1 = cat2;
	delete cat1;
	delete cat2;
}