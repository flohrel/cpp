#include "ClapTrap.hpp"

int	main( void )
{
	ClapTrap clap("Clappy");

	clap.attack("Jean-Eude");
	clap.takeDamage(5);
	clap.beRepaired(2);
	clap.takeDamage(10);
	return (0);
}