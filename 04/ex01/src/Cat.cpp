#include "Cat.hpp"

Cat::Cat( void ) : _type("Cat")
{
	std::cout << "Cat constructor called" << std::endl;
	this->_brain = new Brain();
	return ;
}

Cat::Cat( Cat const & src )
{
	std::cout << "Cat copy constructor called." << std::endl;
	this->_type = src._type;
	*(this->_brain) = *(src.getBrain());
	return ;
}

Cat::~Cat( void )
{
	delete (this->_brain);
	std::cout << "Cat destructor called" << std::endl;
	return ;
}

Cat &	Cat::operator=( Cat const & rhs )
{
	this->_type = rhs._type;
	*(this->_brain) = *(rhs.getBrain());
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

Brain const *	Cat::getBrain( void ) const
{
	return (this->_brain);
}