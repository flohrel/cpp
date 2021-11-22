#include "Cat.hpp"

Cat::Cat( void ) : _type("Cat")
{
	std::cout << "Cat constructor called" << std::endl;
	return ;
}

Cat::Cat( Cat const & src )
{
	*this = src;
	std::cout << "Cat copy constructor called." << std::endl;
	return ;
}

Cat::~Cat( void )
{
	std::cout << "Cat destructor called" << std::endl;
	return ;
}

Cat &	Cat::operator=( Cat const & rhs )
{
	this->_type = rhs._type;
	return (*this);
}

void	Cat::makeSound( void ) const
{
	std::cout << "Nyan nyan !" << std::endl;
	return ;
}

std::string const &	Cat::getType( void ) const
{
	return (this->_type);
}