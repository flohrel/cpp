#include "Cat.hpp"

Cat::Cat( void )
{
	std::cout << "Cat constructor called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
	return ;
}

Cat::Cat( Cat const & src )
{
	std::cout << "Cat copy constructor called." << std::endl;
	this->_type = src.getType();
	this->_brain = new Brain();
	*(this->_brain) = *(src.getBrain());
	return ;
}

Cat::~Cat( void )
{
	delete (this->_brain);
	std::cout << "Cat destructor called" << std::endl;
	return ;
}

Cat &	Cat::operator=( Animal const & rhs )
{
	this->_type = rhs.getType();
	*(this->_brain) = *(rhs.getBrain());
	return (*this);
}

void	Cat::makeSound( void ) const
{
	std::cout << "Nyan nyan !" << std::endl;
	return ;
}

Brain *	Cat::getBrain( void ) const
{
	return (this->_brain);
}
