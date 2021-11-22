#include "Dog.hpp"

Dog::Dog( void ) : _type("Dog")
{
	std::cout << "Dog constructor called" << std::endl;
	return ;
}

Dog::Dog( Dog const & src )
{
	*this = src;
	std::cout << "Dog copy constructor called." << std::endl;
	return ;
}

Dog::~Dog( void )
{
	std::cout << "Dog destructor called" << std::endl;
	return ;
}

Dog &	Dog::operator=( Dog const & rhs )
{
	this->_type = rhs._type;
	return (*this);
}

void	Dog::makeSound( void ) const
{
	std::cout << "Wan wan !" << std::endl;
	return ;
}

std::string const &	Dog::getType( void ) const
{
	return (this->_type);
}