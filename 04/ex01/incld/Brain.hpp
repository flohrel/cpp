#ifndef __BRAIN__H__
#define __BRAIN__H__

#include <string>
#include <iostream>

class Brain
{
	public:
		Brain( void );
		Brain( Brain const & src );
		~Brain( void );

		Brain &	operator=( Brain const & rhs );


	private:
		std::string	_ideas[100];


};

#endif