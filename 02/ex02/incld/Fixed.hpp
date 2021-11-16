#ifndef __FIXED__H__
#define __FIXED__H__

#include <iostream>
#include <cmath>

class Fixed
{

public:

	Fixed( void );
	Fixed( const int n );
	Fixed( const float f );
	Fixed( const Fixed& src );
	~Fixed( void );

	Fixed&					operator=( const Fixed& src );

	Fixed					operator+( const Fixed& rhs ) const { return Fixed(this->toFloat() + rhs.toFloat()); }
	Fixed					operator-( const Fixed& rhs ) const { return Fixed(this->toFloat() - rhs.toFloat()); }
	Fixed					operator*( const Fixed& rhs ) const { return Fixed(this->toFloat() * rhs.toFloat()); }
	Fixed					operator/( const Fixed& rhs ) const;

	bool					operator>( const Fixed& rhs ) const { return (this->_value > rhs.getRawBits()); }
	bool					operator>=( const Fixed& rhs ) const { return (this->_value >= rhs.getRawBits()); }
	bool					operator<( const Fixed& rhs ) const { return (this->_value < rhs.getRawBits()); }
	bool					operator<=( const Fixed& rhs ) const { return (this->_value <= rhs.getRawBits()); }
	bool					operator==( const Fixed& rhs ) const { return (this->_value == rhs.getRawBits()); }
	bool					operator!=( const Fixed& rhs ) const { return (this->_value != rhs.getRawBits()); }

	Fixed					operator++( void );
	Fixed					operator++( int );
	Fixed					operator--( void );
	Fixed					operator--( int );

	static Fixed&			min(Fixed& val1, Fixed& val2);
	static const Fixed& 	min(const Fixed& val1, const Fixed& val2);
	static Fixed&			max(Fixed& val1, Fixed& val2);
	static const Fixed& 	max(const Fixed& val1, const Fixed& val2);

	int						getRawBits( void ) const;
	void					setRawBits( const int raw );
	float					toFloat(void) const;
	int						toInt(void) const;


private:

	static const bool		_verbose = false;
	static const int		_fractionalBits = 8;

	int						_value;

};

std::ostream&				operator<<( std::ostream& os, const Fixed& f );

int							ft_pow(int value, int pow);

#endif  //!__FIXED__H__