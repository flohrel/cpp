#include "AMateria.hpp"

AMateria::AMateria( void ) : _type("")
{
	std::cout << "AMateria default constructor called" << std::endl;
	return;
}

AMateria::AMateria ( std::string const & type ) : _type(type)
{
	std::cout << "AMateria constructor called" << std::endl;
	return ;
}

AMateria::AMateria( AMateria const & src )
{
	*this = src;
	std::cout << "AMateria copy constructor called" << std::endl;
	return;
}

AMateria::~AMateria( void )
{
	std::cout << "AMateria destructor called" << std::endl;
	return;
}

AMateria &	AMateria::operator=( AMateria const & rhs )
{
	this->_type = rhs._type;
	return (*this);
}

std::string const &	AMateria::getType( void ) const
{
	return (this->_type);
}

void	AMateria::use( ICharacter & target )
{
	(void)target;
	std::cout << "Nothing happening" << std::endl;
	return ;
}