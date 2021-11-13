#ifndef __HUMANA__H__
#define __HUMANA__H__

#include <string>
#include <iostream>
#include "Weapon.hpp"

class	HumanA
{

private:

	std::string	_name;
	Weapon&		_weapon;


public:

	HumanA( std::string name, Weapon &weapon );
	~HumanA( void );

	void	attack( void ) const;
};

#endif  //!__HUMANA__H__