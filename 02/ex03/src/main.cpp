#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"
#include <cmath>

int main(void)
{
	if (bsp( Point(Fixed(0), Fixed(0)), Point(Fixed(20), Fixed(0)), Point(Fixed(10), Fixed(30)), Point(Fixed(10), Fixed(15)) ))
		std::cout << "Inside";
	else
		std::cout << "Not Inside";
   return (0);
}