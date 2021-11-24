#ifndef __ICE__H__
#define __ICE__H__

#include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice( void );
		Ice( Ice const & src );
		~Ice( void );

		Ice &	operator=( Ice const & rhs );

		AMateria*	clone( void ) const;
		void		use( ICharacter & target );

};

#endif