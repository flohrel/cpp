#include <cstdlib>
#include <errno.h>
#include <climits>
#include <iostream>

std::string	getType( std::string const & str )
{
	if ((str.find(".") != std::string::npos) ||
		(str.find("nan") != std::string::npos) || 
		(str.find("inf") != std::string::npos))
	{
		return ("double");
	}
	return ("int");
}

void	fromInt(char const *arg)
{

}

void	fromDouble(char const *arg)
{
	double	d;

	d = strtod(arg, NULL);
	if ((d < 0) || (d > SCHAR_MAX))
		
}

int	main(int ac, char **av)
{
	std::string	type;
	if (ac != 2)
		return (EXIT_FAILURE);
	type = getType(static_cast<std::string>(av[1]));
	if (type == "int")
		fromInt(av[1]);
	else
		fromDouble(av[1]);
	return (0);
}