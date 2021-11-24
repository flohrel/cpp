#ifndef __CHARACTER__H__
#define __CHARACTER__H__

#include "ICharacter.hpp"

class Character: public ICharacter
{
	private:
		static unsigned int const	_kInventorySize = 4;
		unsigned int				_nbMateria;
		std::string					_name;
		AMateria *					_inventory[Character::_kInventorySize];
		
		Character( void );


	public:
		Character( std::string const & name );
		Character( Character const & src );
		~Character( void );

		Character &	operator=( Character const & rhs );

		std::string const &	getName( void ) const;
		void				equip( AMateria * m );
		void				unequip( int idx );
		void				use( int idx, ICharacter & target );


};

#endif