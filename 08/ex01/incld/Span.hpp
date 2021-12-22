#ifndef __SPAN__H__
#define __SPAN__H__

class Span
{
	public:
		Span( unsigned int n );
		Span( Span const & src );
		~Span( void );

		Span &	operator=( Span const & rhs );
		
	
	private:
		unsigned int	_maxSize;
		unsigned int	_size;
		Span( void );

};

Span::Span( unsigned int n ) : _maxSize(n), _size(0)
{
	return;
}

Span::Span( Span const & src )
{
	*this = src;
	return;
}

Span::~Span( void )
{
	/* Content */
	return;
}

Span &	Span::operator=( Span const & rhs )
{
	/* Content */
	return (*this);
}

#endif