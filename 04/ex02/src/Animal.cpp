#include "Animal.hpp"

Animal::Animal( void ) : _type("Animal")
{
	std::cout << "Animal constructor called" << std::endl;
	return ;
}

Animal::Animal( Animal const & src )
{
	*this = src;
	std::cout << "Animal copy constructor called." << std::endl;
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

std::string const &	Animal::getType( void ) const
{
	return (this->_type);
}