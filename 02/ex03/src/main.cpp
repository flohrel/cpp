#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"
#include <cmath>

int main(void)
{
	Point	vertex1(Fixed(0), Fixed(0));
	Point	vertex2(Fixed(20), Fixed(0));
	Point	vertex3(Fixed(10), Fixed(30));
	Point	point(Fixed(35), Fixed(15));

	if (bsp( vertex1, vertex2, vertex3, point ))
		std::cout << "Inside";
	else
		std::cout << "Not Inside";
   return (0);
}