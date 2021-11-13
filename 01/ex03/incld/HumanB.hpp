#ifndef __HUMANB__H__
#define __HUMANB__H__

#include <string>
#include <iostream>
#include "Weapon.hpp"

class	HumanB
{

private:

	std::string	_name;
	Weapon*		_weapon;


public:

	HumanB( std::string name );
	~HumanB( void );

	void	attack( void ) const;
	void	setWeapon( Weapon &weapon );
};

#endif  //!__HUMANB__H__