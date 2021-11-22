#ifndef __CLAPTRAP__H__
#define __CLAPTRAP__H__

#include <string>
#include <iostream>

class ClapTrap
{
	public:
		ClapTrap( void );
		ClapTrap( std::string name );
		ClapTrap( ClapTrap const & src );
		~ClapTrap( void );

		void	attack( std::string const & target ) const;
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );


	protected:
		std::string		_name;
		unsigned int	_hp;
		unsigned int	_mp;
		unsigned int	_dmg;


};

#endif