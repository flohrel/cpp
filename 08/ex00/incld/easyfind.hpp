#ifndef __EASYFIND__H__
#define __EASYFIND__H__

#include <algorithm>
#include <exception>

class NotFoundException : public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return ("Element not found.");
		}
};

template< typename T >
int	easyfind( const T& container, const int i )
{
	typename T::const_iterator	it;

	if ((it = find( container.begin(), container.end(), i)) == container.end())
		throw (NotFoundException());
	return (*it);
}

#endif
