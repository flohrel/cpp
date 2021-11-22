#ifndef __WRONGANIMAL__H__
#define __WRONGANIMAL__H__

#include <string>
#include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal( void );
		WrongAnimal( WrongAnimal const & src );
		virtual ~WrongAnimal( void );

		WrongAnimal &	operator=( WrongAnimal const & rhs );

		virtual std::string const &	getType( void ) const;
		void						makeSound( void ) const;


	protected:
		std::string _type;


};

#endif