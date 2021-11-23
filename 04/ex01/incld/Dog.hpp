#ifndef __DOG__H__
#define __DOG__H__

#include <string>
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	public:
		Dog( void );
		Dog( Dog const & src );
		~Dog( void );

		Dog &	operator=( Animal const & rhs );

		Brain *	getBrain( void ) const;
		void	makeSound( void ) const;


	private:
		Brain *		_brain;


};


#endif