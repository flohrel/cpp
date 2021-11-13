#include <Zombie.hpp>

Zombie*	zombieHorde( int N, std::string name )
{
	int		i;
	Zombie *horde = new Zombie[N];

	i = -1;
	while (++i < N)
	{
		horde[i] = name + ' ' + static_cast<char>(i + '0');
	}
	return (horde);
}