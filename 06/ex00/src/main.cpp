#include "Converter.hpp"
#include "Factory.hpp"

int	main( int ac, char **av )
{
	if (ac != 2)
	{
		return (EXIT_FAILURE);
	}
	Factory		f;
	Converter	*c = f.makeConverter(av[1]);

	c->display();
	delete (c);
	return (0);
}