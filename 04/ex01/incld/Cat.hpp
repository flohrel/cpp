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

		Cat &	operator=( Cat const & rhs );

		Brain const *		getBrain( void ) const;
		std::string const &	getType( void ) const;
		void				makeSound( void ) const;


	protected:
		std::string _type;


	private:
		Brain *		_brain;


};

#endif