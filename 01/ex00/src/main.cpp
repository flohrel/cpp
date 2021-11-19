#include "Zombie.hpp"

int	main(void)
{
	Zombie zombie1 = Zombie("Raphael");

	randomChump("Namiko");

	Zombie *zombie2 = newZombie("Florian");

	delete zombie2;
	return (0);
}
