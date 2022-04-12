#ifndef __INT__H__
# define __INT__H__

# include "Converter.hpp"

class Int : public Converter
{
	private:
		long long	_l;

		Int( void );


	public:
		Int( const std::string& str, e_type type );
		Int( const Int& src );
		~Int( void );

		Int&			operator=( const Int& rhs );

		unsigned char	toChar( void ) const;
		int				toInt( void ) const;

};

#endif