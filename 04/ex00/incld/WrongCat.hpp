#ifndef __WRONGCAT__H__
#define __WRONGCAT__H__

#include <string>
#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:
		WrongCat( void );
		WrongCat( WrongCat const & src );
		~WrongCat( void );

		WrongCat &	operator=( WrongCat const & rhs );

		std::string const &	getType( void ) const;
		void				makeSound( void ) const;


	protected:
		std::string _type;


};

#endif