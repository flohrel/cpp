#ifndef __FRAGTRAP__H__
#define __FRAGTRAP__H__

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	public:
		FragTrap( void );
		FragTrap( std::string name );
		FragTrap( FragTrap const & src );
		~FragTrap( void );

		void	attack( std::string const & target ) const;
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );
		void	highFivesGuys( void );

		unsigned int	_hp;
		unsigned int	_dmg;


};

#endif