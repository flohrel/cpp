#ifndef __AMATERIA__H__
#define __AMATERIA__H__

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string	_type;


	public:
		AMateria( void );
		AMateria( std::string const & type );
		AMateria( AMateria const & src );
		virtual ~AMateria( void );

		AMateria &	operator=( AMateria const & rhs );

		std::string const &	getType( void ) const;
		virtual AMateria*	clone( void ) const = 0;
		virtual void		use( ICharacter & target );


};

#endif