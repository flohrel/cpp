#include "FragTrap.hpp"

int	main( void )
{
	FragTrap clap("Clappy");

	clap.attack("Jean-Eude");
	clap.takeDamage(5);
	clap.beRepaired(20);
	clap.takeDamage(10);
	clap.highFivesGuys();
	return (0);
}