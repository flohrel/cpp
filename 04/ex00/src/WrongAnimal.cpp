#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : _type("WrongAnimal")
{
	std::cout << "WrongAnimal constructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal( WrongAnimal const & src )
{
	*this = src;
	std::cout << "WrongAnimal copy constructor called." << std::endl;
	return ;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal destructor called" << std::endl;
	return ;
}

WrongAnimal &	WrongAnimal::operator=( WrongAnimal const & rhs )
{
	this->_type = rhs._type;
	return (*this);
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "* ... *" << std::endl;
	return ;
}

std::string const &	WrongAnimal::getType( void ) const
{
	return (this->_type);
}