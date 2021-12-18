#ifndef __WHATEVER__H__
#define __WHATEVER__H__

template< typename T >
void	swap( T* a, T* b )
{
	T	c;

	c = *b;
	*b = *a;
	*a = c;
}

template< typename T >
T const&	min( T const& a, T const& b )
{
	return ((a < b) ? a : b);
}

template< typename T >
T const&	max( T const& a, T const& b )
{
	return ((a > b) ? a : b);
}

#endif