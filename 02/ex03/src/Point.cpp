#include "Point.hpp"

Point::Point( void ): _x(0), _y(0) { return ; }

Point::Point( const Point& src ) : _x(src._x), _y(src._y) {	return ; }

Point::Point( Fixed const& pt1, Fixed const& pt2 ): _x(pt1), _y(pt2) { return ; }

Point::~Point( void ) { return ; }

Point&	Point::operator=( const Point& rhs )
{
	return ((Point &)rhs);
}

Fixed	Point::get_x( void ) const
{
	return (this->_x);
}

Fixed	Point::get_y( void ) const 
{
	return (this->_y);
}