#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"
#include <cmath>

int main(void)
{
	Point	vertex1(Fixed(0), Fixed(0));
	Point	vertex2(Fixed(10), Fixed(0));
	Point	vertex3(Fixed(10), Fixed(30));
	Point	point(Fixed(5), Fixed(0));

	if (bsp( vertex1, vertex2, vertex3, point ))
		std::cout << "Inside";
	else
		std::cout << "Not Inside";
   return (0);
}