#ifndef __ZOMBIE__H__
#define __ZOMBIE__H__

#include <string>
#include <iostream>

class Zombie
{

private:

	std::string	_name;

	void	_announce( void ) const;


public:

	Zombie( void );
	Zombie( std::string name );
	~Zombie( void );


};

Zombie*	zombieHorde( int N, std::string name );

#endif  //!__ZOMBIE__H__