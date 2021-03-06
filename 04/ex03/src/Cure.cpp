#include "Cure.hpp"

Cure::Cure( void ) : AMateria("cure")
{
	std::cout << "Cure constructor called" << std::endl;
	return;
}

Cure::Cure( Cure const & src )
{
	*this = src;
	std::cout << "Cure copy constructor called" << std::endl;
	return;
}

Cure::~Cure( void )
{
	std::cout << "Cure destructor called" << std::endl;
	return;
}

Cure &	Cure::operator=( Cure const & rhs )
{
	this->_type = rhs._type;
	return (*this);
}

AMateria*	Cure::clone( void ) const
{
	return (new Cure(*this));
}

void	Cure::use( ICharacter & target )
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	return ;
}