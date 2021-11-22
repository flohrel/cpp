#ifndef __SCAVTRAP__H__
#define __SCAVTRAP__H__

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
	public:
		ScavTrap( void );
		ScavTrap( std::string name );
		ScavTrap( ScavTrap const & src );
		~ScavTrap( void );

		void	attack( std::string const & target ) const;
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );
		void	guardGate( void );


	protected:
		std::string		_name;
		unsigned int	_mp;


};

#endif