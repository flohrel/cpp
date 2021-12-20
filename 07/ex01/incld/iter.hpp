#ifndef __ITER__H__
#define __ITER__H__

#include <cstddef>

template < typename T >
void	iter( T* array, size_t length, void (*ft)( T& ))
{
	for (size_t i = 0; i < length; i++)
	{
		ft(array[i]);
	}
}

#endif