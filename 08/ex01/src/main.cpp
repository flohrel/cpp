#include "Span.hpp"
#include <iostream>

int     main( void )
{
		{
			std::cout << "----------" << std::endl;
			std::cout << "| TEST 1 |" << std::endl;
			std::cout << "----------" << std::endl;
			std::cout << "Span(5) + addNumber {5, 3, 17, 9, 11}" << std::endl;
			
			Span sp = Span(5);
			sp.addNumber(5);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			std::cout << "Shortest span = " << sp.shortestSpan() << std::endl;
			std::cout << "Longest span = " << sp.longestSpan() << std::endl;
        }
        std::cout << std::endl;
        {
			std::cout << "----------" << std::endl;
			std::cout << "| TEST 2 |" << std::endl;
			std::cout << "----------" << std::endl;
			std::cout << "Span(5) + addNumber {5, 3, 17, 9, 11, 666}" << std::endl;
			try
			{
				Span sp = Span(5);
				sp.addNumber(5);
				sp.addNumber(3);
				sp.addNumber(17);
				sp.addNumber(9);
				sp.addNumber(11);
				sp.addNumber(666);
			}
			catch (const std::exception &e)
			{
				std::cout << e.what() << std::endl;
			}
        }
		std::cout << std::endl;
		{
			std::cout << "----------" << std::endl;
			std::cout << "| TEST 3 |" << std::endl;
			std::cout << "----------" << std::endl;
			std::cout << "Span(5) + addNumber {}" << std::endl;
			try
			{
				Span sp = Span(5);
				std::cout << "Shortest span = " << sp.shortestSpan() << std::endl;
				std::cout << "Longest span = " << sp.longestSpan() << std::endl;
			}
			catch (const std::exception &e)
			{
				std::cout << e.what() << std::endl;
			}
			std::cout << "Span(5) + addNumber {42}" << std::endl;
			try
			{
				Span sp2 = Span(5);
				sp2.addNumber(42);
				std::cout << "Shortest span = " << sp2.shortestSpan() << std::endl;
				std::cout << "Longest span = " << sp2.longestSpan() << std::endl;
			}
			catch (const std::exception &e)
			{
				std::cout << e.what() << std::endl;
			}
		}
		std::cout << std::endl;
		{
			std::cout << "----------" << std::endl;
			std::cout << "| TEST 4 |" << std::endl;
			std::cout << "----------" << std::endl;
			std::cout << "int int_array[] = { 16, 2, 77, 29, 42, 8, 666 };" << std::endl;
			std::cout << "Span(7) + addRange(int_array, int_array + sizeof(int_array) / sizeof(int))" << std::endl;
			int     int_array[] = { 16, 2, 77, 29, 42, 8, 666 };
			Span sp = Span(7);
			sp.addRange(int_array, int_array + sizeof(int_array) / sizeof(int));
			std::cout << "Shortest span = " << sp.shortestSpan() << std::endl;
			std::cout << "Longest span = " << sp.longestSpan() << std::endl;
			std::cout << "addNumber {0}" << std::endl;
			try
			{
				sp.addNumber(0);
			}
			catch (const std::exception &e)
			{
				std::cout << e.what() << std::endl;
			}
        }
}