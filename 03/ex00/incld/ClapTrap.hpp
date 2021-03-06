#ifndef __CLAPTRAP__H__
#define __CLAPTRAP__H__

#include <string>
#include <iostream>

class ClapTrap
{
	public:
		ClapTrap( std::string name );
		ClapTrap( ClapTrap const & src );
		~ClapTrap( void );

		void	attack( std::string const & target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );


	private:
		std::string _name;
		unsigned int	_hp;
		unsigned int	_mp;
		unsigned int	_dmg;


};

#endif