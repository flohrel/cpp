#include "Ice.hpp"

Ice::Ice( void ) : AMateria("ice")
{
	std::cout << "Ice constructor called" << std::endl;
	return;
}

Ice::Ice( Ice const & src )
{
	*this = src;
	std::cout << "Ice copy constructor called" << std::endl;
	return;
}

Ice::~Ice( void )
{
	std::cout << "Ice destructor called" << std::endl;
	return;
}

Ice &	Ice::operator=( Ice const & rhs )
{
	this->_type = rhs._type;
	return (*this);
}

AMateria*	Ice::clone( void ) const
{
	return (new Ice(*this));
}

void	Ice::use( ICharacter & target )
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return ;
}