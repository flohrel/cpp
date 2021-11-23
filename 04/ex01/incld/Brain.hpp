#ifndef __BRAIN__H__
#define __BRAIN__H__

#include <string>
#include <iostream>

class Brain
{
	private:
		static const unsigned int	kNbIdeas = 100;
	
	
	public:
		Brain( void );
		Brain( Brain const & src );
		~Brain( void );

		Brain &	operator=( Brain const & rhs );

		std::string		ideas[Brain::kNbIdeas];


};

#endif