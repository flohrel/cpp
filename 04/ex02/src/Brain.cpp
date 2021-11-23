#include "Brain.hpp"

Brain::Brain( void )
{
	std::cout << "Brain constructor called" << std::endl;
	return;
}

Brain::Brain( Brain const & src )
{
	*this = src;
	std::cout << "Brain copy constructor called" << std::endl;
	return;
}

Brain::~Brain( void )
{
	std::cout << "Brain destructor called" << std::endl;
	return;
}

Brain &	Brain::operator=( Brain const & rhs )
{
	for (unsigned int i = 0; i < Brain::kNbIdeas; i++)
		this->ideas[i] = rhs.ideas[i];
	return (*this);
}