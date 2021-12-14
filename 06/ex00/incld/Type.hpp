#ifndef __TYPE__H__
# define __TYPE__H__

# include <string>
# include <iostream>
# include <cstdlib>
# include <limits>
# include <cmath>

enum e_type
{
	NONE,
	CHAR,
	INT,
	FLOAT,
	DOUBLE
};

class Type
{
	private:
		enum e_type	_type;
		std::string	_str;
		char		_c;
		int64_t		_l;
		float		_f;
		double		_d;


	public:
		Type( void );
		Type( char const * arg );
		Type( Type const & src );
		~Type( void );

		Type &	operator=( Type const & rhs );

		enum e_type	getType( void ) const;
		void		convert( void );
		void		fromChar( void );
		void		fromInt( void );
		void		fromFloat( void );
		void		fromDouble( void );
		char		toChar( int64_t const l ) const;
		char		toChar( float const l ) const;
		char		toChar( double const d ) const;
		int			toInt( double const d ) const;
		float		toFloat( double const d ) const;


	class	NonPrintable: public std::exception
	{
		public:
			virtual char const *	what() const throw();
	};

	class	Overflow: public std::exception
	{
		public:
			virtual char const *	what() const throw();
	};


};

#endif