#ifndef __DIAMONDTRAP__H__
#define __DIAMONDTRAP__H__

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	public:
		DiamondTrap( void );
		DiamondTrap( std::string name );
		DiamondTrap( DiamondTrap const & src );
		~DiamondTrap( void );

		DiamondTrap &	operator=( DiamondTrap const & src );


		void	attack( std::string const & target ) const;
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );
		void	whoAmI( void );

		std::string	_name;


};

#endif