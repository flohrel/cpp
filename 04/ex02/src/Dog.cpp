#include "Dog.hpp"

Dog::Dog( void )
{
	std::cout << "Dog constructor called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
	return ;
}

Dog::Dog( Dog const & src )
{
	this->_type = src.getType();
	this->_brain = new Brain();
	*(this->_brain) = *(src.getBrain());
	std::cout << "Dog copy constructor called." << std::endl;
	return ;
}

Dog::~Dog( void )
{
	delete (this->_brain);
	std::cout << "Dog destructor called" << std::endl;
	return ;
}

Dog &	Dog::operator=( Animal const & rhs )
{
	this->_type = rhs.getType();
	*(this->_brain) = *(rhs.getBrain());
	return (*this);
}

void	Dog::makeSound( void ) const
{
	std::cout << "Wan wan !" << std::endl;
	return ;
}

Brain *	Dog::getBrain( void ) const
{
	return (this->_brain);
}
