#include "ScavTrap.hpp"

int	main( void )
{
	ScavTrap clap("Clappy");

	clap.attack("Jean-Eude");
	clap.takeDamage(5);
	clap.beRepaired(20);
	clap.takeDamage(10);
	clap.guardGate();
	return (0);
}