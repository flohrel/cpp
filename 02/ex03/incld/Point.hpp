#ifndef __POINT__H__
#define __POINT__H__

#include "Fixed.hpp"

class Point
{
private:
	const Fixed	_x;
	const Fixed	_y;


public:
	Point( void );
	Point( const Point& src );
	Point( Fixed const& pt1, Fixed const& pt2 );
	~Point( void );
	
	Point&		operator=( const Point& src );

	Fixed		get_x( void ) const;
	Fixed		get_y( void ) const;



};

bool	bsp( const Point v1, const Point v2, const Point v3, const Point pt );

#endif  //!__POINT__H__