#include "Point.hpp"
#include "Fixed.hpp"

Fixed	area(Fixed x1, Fixed y1, Fixed x2, Fixed y2, Fixed x3, Fixed y3)
{
	return ( Fixed::abs(Fixed((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / Fixed(2))) );
}

bool	bsp( const Point v1, const Point v2, const Point v3, const Point pt )
{
	Fixed	A, A1, A2, A3;

	Fixed	x1 = v1.get_x(), y1 = v1.get_y();
	Fixed	x2 = v2.get_x(), y2 = v2.get_y();
	Fixed	x3 = v3.get_x(), y3 = v3.get_y();
	Fixed	xpt = pt.get_x(), ypt = pt.get_y();

	A = area(x1, y1, x2, y2, x3, y3);
	A1 = area(xpt, ypt, x2, y2, x3, y3);
	A2 = area(x1, y1, xpt, ypt, x3, y3);
	A3 = area(x1, y1, x2, y2, xpt, ypt);

    return (A == (A1 + A2 + A3));
}