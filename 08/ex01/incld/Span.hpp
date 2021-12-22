#ifndef __SPAN__H__
#define __SPAN__H__

#include <algorithm>
#include <exception>
#include <vector>

class Span
{
	private:
		unsigned int		_maxSize;
		std::vector<int>	_numbers;

		Span( void );

		Span &	operator=( Span const & rhs );
		
	
	public:
		Span( unsigned int n );
		Span( Span const& src );
		~Span( void );

		unsigned int		getMaxSize( void ) const;
		std::vector<int>	getNumbers( void ) const;
		void				addNumber( int number );
		unsigned int		shortestSpan( void );
		unsigned int		longestSpan( void );

		class ContainerFull: public std::exception
		{
			public:
				virtual char const *	what() const throw();
		};

		class ContainerEmpty: public std::exception
		{
			public:
				virtual char const *	what() const throw();
		};


};

#endif