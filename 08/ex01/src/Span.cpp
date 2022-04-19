#include "Span.hpp"

Span::Span( unsigned int n ) : _maxSize(n)
{
	return;
}

Span::Span( Span const & src )
{
	*this = src;
	return;
}

Span::~Span( void )
{
	return;
}

unsigned int		Span::getMaxSize( void ) const
{
	return (this->_maxSize);
}

std::vector<int>	Span::getNumbers( void ) const
{
	return (this->_numbers);
}

Span &	Span::operator=( Span const & rhs )
{
	this->_maxSize = rhs.getMaxSize();
	this->_numbers = rhs.getNumbers();
	return (*this);
}

char const*	Span::ContainerEmpty::what() const throw()
{
	return ("Not enough number in the container.");
}

char const*	Span::ContainerFull::what() const throw()
{
	return ("Container is already full.");
}

unsigned int	Span::shortestSpan( void )
{
	int							result;
	std::vector<int>::iterator	it;
	std::vector<int>::iterator	it2;

	if (this->_numbers.size() < 2)
		throw (Span::ContainerEmpty());
	it = this->_numbers.begin();
	it2 = it + 1;
	result = *(this->_numbers.end() - 1) - *it;
	for (; it2 != this->_numbers.end(); ++it, ++it2)
	{
		if (*it2 - *it < result)
		{
			result = *it2 - *it;
		}
	}
	return (result);
}

unsigned int	Span::longestSpan( void )
{
	int	result;

	if (this->_numbers.size() < 2)
		throw (Span::ContainerEmpty());
	result = *(this->_numbers.end() - 1) - *(this->_numbers.begin());
	return (result);
}