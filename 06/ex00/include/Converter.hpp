#ifndef __CONVERTER__H__
# define __CONVERTER__H__

# include <string>
# include <cstdlib>
# include <limits>
# include <cmath>
# include <iostream>
# include <iomanip>

# ifndef VERBOSE
#  define VERBOSE	0
# endif

enum e_type
{
	CHAR = 0,
	INT = 1,
	FLOAT = 2,
	DOUBLE = 3,
	NONE = 4
};

class Converter
{
	private:
		static const size_t		kNbConversion = 5;

		typedef					void (Converter::*t_convert_fn)(void);

		std::string				_str;
		unsigned char			_c;
		int						_i;
		long long				_l;
		float					_f;
		double					_d;
		e_type					_type;
		t_convert_fn			_convert[Converter::kNbConversion];



	public:
		Converter( void );
		Converter( char const * arg );
		Converter( Converter const & src );
		~Converter( void );

		Converter &	operator=( Converter const & rhs );

		e_type		getType( void ) const;
		void		fromChar( void );
		void		fromInt( void );
		void		fromFloat( void );
		void		fromDouble( void );
		char		toChar( long long const l ) const;
		char		toChar( double const d ) const;
		int			toInt( long long l ) const;
		int			toInt( double const d ) const;
		float		toFloat( double const d ) const;

		void		convert( void );
		void		display( void );


	class	NonPrintable: public std::exception
	{
		public:
			char const *	what() const throw();
	};

	class	Overflow: public std::exception
	{
		public:
			char const *	what() const throw();
	};


};

#endif
