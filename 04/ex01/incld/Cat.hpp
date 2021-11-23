#ifndef __CAT__H__
#define __CAT__H__

#include <string>
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	public:
		Cat( void );
		Cat( Cat const & src );
		~Cat( void );

		Cat &	operator=( Animal const & rhs );

		Brain *	getBrain( void ) const;
		void	makeSound( void ) const;


	private:
		Brain *		_brain;


};

#endif