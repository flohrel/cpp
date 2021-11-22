#ifndef __DOG__H__
#define __DOG__H__

#include <string>
#include <iostream>
#include "Animal.hpp"

class Dog: public Animal
{
	public:
		Dog( void );
		Dog( Dog const & src );
		~Dog( void );

		Dog &	operator=( Dog const & rhs );

		std::string const &	getType( void ) const;
		void				makeSound( void ) const;


	protected:
		std::string _type;


};


#endif