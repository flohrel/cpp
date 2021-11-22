#ifndef __ANIMAL__H__
#define __ANIMAL__H__

#include <string>
#include <iostream>

class Animal
{
	public:
		Animal( void );
		Animal( Animal const & src );
		virtual ~Animal( void );

		Animal &	operator=( Animal const & rhs );

		virtual std::string const &	getType( void ) const;
		virtual void				makeSound( void ) const;


	protected:
		std::string _type;


};

#endif