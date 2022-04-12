#ifndef __FLOAT__H__
# define __FLOAT__H__

# include "Converter.hpp"

class Float: public Converter
{
	private:
		float		_f;

		Float( void );


	public:
		Float( const std::string& str, e_type type );
		Float( const Float& src );
		~Float( void );

		unsigned char	toChar( void ) const;	
		int				toInt( void ) const;
		float			toFloat( void ) const;

};

#endif