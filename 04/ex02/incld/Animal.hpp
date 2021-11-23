#ifndef __ANIMAL__H__
#define __ANIMAL__H__

#include <string>
#include <iostream>
#include "Brain.hpp"

class Animal
{
	public:
		Animal( void );
		Animal( Animal const & src );
		virtual ~Animal( void );

		virtual Animal &	operator=( Animal const & rhs );

		virtual std::string const &	getType( void ) const;
		virtual void				makeSound( void ) const = 0;
		virtual Brain *				getBrain( void ) const = 0;


	protected:
		std::string _type;


};

#endif