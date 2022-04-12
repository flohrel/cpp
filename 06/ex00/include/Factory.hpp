#ifndef __FACTORY__H__
# define __FACTORY__H__

# include "Converter.hpp"
# include "Float.hpp"
# include "Int.hpp"

class Factory
{
	public:
		Factory( void );
		Factory( const Factory& src );
		~Factory( void );

		Factory&
		operator=( const Factory& rhs );

		e_type		getType( std::string arg );
		Converter*	makeConverter( const char* str );

};

#endif