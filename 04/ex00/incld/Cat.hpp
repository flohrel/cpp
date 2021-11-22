#ifndef __CAT__H__
#define __CAT__H__

#include <string>
#include <iostream>
#include "Animal.hpp"

class Cat: public Animal
{
	public:
		Cat( void );
		Cat( Cat const & src );
		~Cat( void );

		Cat &	operator=( Cat const & rhs );

		std::string const &	getType( void ) const;
		void				makeSound( void ) const;


	protected:
		std::string _type;


};

#endif