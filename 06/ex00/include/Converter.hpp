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
	protected:
		e_type					_type;
		std::string				_str;
		char					_c;
		double					_d;


	public:
		Converter( void );
		Converter( const std::string& str, e_type type );
		Converter( const Converter& src );
		virtual ~Converter( void );

		Converter&				operator=( const Converter& rhs );

		void					convert( void );
		void					display( void );

		virtual char			toChar( void ) const;	
		virtual int				toInt( void ) const;
		virtual float			toFloat( void ) const;


	class	NonPrintable: public std::exception
	{
		public:
			const char*	what() const throw();
	};

	class	Overflow: public std::exception
	{
		public:
			const char*	what() const throw();
	};


};

bool	is_print(int ch);

#endif
