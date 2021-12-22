#ifndef __MUTANTSTACK__H__
#define __MUTANTSTACK__H__

#include <iterator>
#include <stack>

template< class T >
class MutantStack: public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator	begin( void ) { return std::stack<T>::c.begin(); };
		iterator	end( void ) { return std::stack<T>::c.end(); };
};

#endif