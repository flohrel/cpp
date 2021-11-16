#include "Fixed.hpp"

Fixed::Fixed( void ) : _value(0)
{
	if (this->_verbose)
		std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( const int n ) : _value(n << Fixed::_fractionalBits)
{
	return ;
}

Fixed::Fixed( const float f )
{
	this->_value = roundf(f * ft_pow(2, Fixed::_fractionalBits));
	return ;
}

Fixed::Fixed( const Fixed& src )
{
	if (this->_verbose)
		std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::~Fixed( void )
{
	if (this->_verbose)
		std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed	Fixed::operator/( const Fixed &rhs ) const
{
	if (!rhs.toFloat())
	{
		std::cout << "Divide by zero: IMPOSSIBURU" << std::endl;
		return (Fixed());
	}
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

Fixed&	Fixed::operator=( const Fixed& rhs )
{
	if (this->_verbose)
		std::cout << "Assignation operator called" << std::endl;
	this->_value = rhs.getRawBits();
	return (*this);
}

Fixed	Fixed::operator++( void )
{
	++this->_value;
	return (*this);
}

Fixed	Fixed::operator++( int )
{
	Fixed	f;

	f.setRawBits(this->_value++);
	return (f);
}

Fixed&	min(Fixed& val1, Fixed& val2)
{
	if (val1.getRawBits() <= val2.getRawBits())
		return (val1);
	else
		return (val2);
}

const Fixed&	Fixed::min(const Fixed& val1, const Fixed& val2)
{
	if (val1 <= val2)
		return (val1);
	else
		return (val2);
}

Fixed&	max(Fixed& val1, Fixed& val2)
{
	if (val1.getRawBits() >= val2.getRawBits())
		return (val1);
	else
		return (val2);
}

const Fixed&	Fixed::max(const Fixed& val1, const Fixed& val2)
{
	if (val1 >= val2)
		return (val1);
	else
		return (val2);
}

int	Fixed::getRawBits( void ) const
{
	if (this->_verbose)
		std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits( const int raw )
{
	if (this->_verbose)
		std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_value / ft_pow(2, Fixed::_fractionalBits));
}

int		Fixed::toInt(void) const
{
	return (this->_value >> Fixed::_fractionalBits);
}

int	ft_pow(int value, int pow)
{
	if (!pow)
		return (1);
	return (value * ft_pow(value, pow - 1));
}

std::ostream&	operator<<( std::ostream& os, const Fixed& f )
{
	os << f.toFloat();
	return (os);
}