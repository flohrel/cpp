#include "Converter.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
		return (EXIT_FAILURE);

	Converter c(av[1]);
	c.convert();
	return (0);
}