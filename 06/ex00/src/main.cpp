#include "Type.hpp"

int	main(int ac, char **av)
{
	Type t;
	if (ac != 2)
		return (EXIT_FAILURE);
	t = Type(av[1]);
	t.convert();
	return (0);
}