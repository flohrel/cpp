#ifndef __EASYFIND__H__
#define __EASYFIND__H__

#include <algorithm>

template< typename T >
typename T::iterator	easyfind( T& container, int i )
{
	return ( static_cast<typename T::iterator>( find( container.begin(), container.end(), i ) ) );
}

#endif