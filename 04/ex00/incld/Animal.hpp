#ifndef __ANIMAL__H__
#define __ANIMAL__H__

#include <string>
#include <iostream>

class Animal
{
	public:
		Animal( void );
		Animal( Animal const & src );
		~Animal( void );

		Animal &	operator=( Animal const & rhs );


	protected:
		std::string _type;

};

Animal::Animal( void )
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal( Animal const & src )
{
	*this = src;
	std::cout << "Copy constructor called." << std::endl;
	return ;
}

Animal::~Animal( void )
{
	std::cout << "Animal destructor called" << std::endl;
	return ;
}

Animal &	Animal::operator=( Animal const & rhs )
{
	this->_type = rhs._type;
	return (*this);
}

#endif