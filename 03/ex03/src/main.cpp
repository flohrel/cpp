#include "DiamondTrap.hpp"

int	main( void )
{
	DiamondTrap clap("Clappy");

	clap.attack("Jean-Eude");
	clap.takeDamage(5);
	clap.beRepaired(20);
	clap.takeDamage(10);
	clap.highFivesGuys();
	clap.guardGate();
	clap.whoAmI();
	return (0);
}