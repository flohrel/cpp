#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : _type("WrongCat")
{
	std::cout << "WrongCat constructor called" << std::endl;
	return ;
}

WrongCat::WrongCat( WrongCat const & src )
{
	*this = src;
	std::cout << "WrongCat copy constructor called." << std::endl;
	return ;
}

WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat destructor called" << std::endl;
	return ;
}

WrongCat &	WrongCat::operator=( WrongCat const & rhs )
{
	this->_type = rhs._type;
	return (*this);
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "Nyan nyan !" << std::endl;
	return ;
}

std::string const &	WrongCat::getType( void ) const
{
	return (this->_type);
}