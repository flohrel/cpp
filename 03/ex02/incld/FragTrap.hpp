#ifndef __FRAGTRAP__H__
#define __FRAGTRAP__H__

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:
		FragTrap( std::string name );
		FragTrap( FragTrap const & src );
		~FragTrap( void );

		void	attack( std::string const & target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );
		void	highFivesGuys( void );


};

#endif