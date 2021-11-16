#ifndef __FIXED__H__
#define __FIXED__H__

#include <iostream>

class Fixed
{

private:

	int					_value;
	static const int	_fractionalBitNb = 8;


public:

	Fixed( void );
	Fixed( const Fixed& src );
	~Fixed( void );

	Fixed&	operator=( const Fixed& src );

	int		getRawBits( void ) const;
	void	setRawBits( const int raw );

};

#endif  //!__FIXED__H__