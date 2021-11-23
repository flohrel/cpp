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

		virtual void				makeSound( void ) const;
		virtual std::string const &	getType( void ) const;
		virtual Brain *				getBrain( void ) const = 0;


	protected:
		std::string _type;


};

#endif