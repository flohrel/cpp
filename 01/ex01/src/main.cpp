#include <Zombie.hpp>

int	main( void )
{
	Zombie *horde = zombieHorde(10, "Jacques Chirac");

	delete [] horde;
}