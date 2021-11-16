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

	Fixed&	operator=( const Fixed& src );

	int		getRawBits( void ) const;
	void	setRawBits( const int raw );
	float	toFloat(void)	 const;
	int		toInt(void) const;


private:

	static const bool	_verbose = false;
	static const int	_fractionalBits = 8;

	int					_value;

};

std::ostream&	operator<<( std::ostream& os, const Fixed& f );

int				ft_pow(int value, int pow);

#endif  //!__FIXED__H__