#include "Bureaucrat.hpp"

int	main( void )
{
	/*
	**	TEST 1: create a bureaucrat, increment his grade and display details with << overload
	*/
		Bureaucrat b1 = Bureaucrat("Bob", 42);
		b1.incrementGrade();
		std::cout << b1 << std::endl;

	/*
	**	TEST 2: create a bureaucrat with grade too high
	*/
		try
		{
			Bureaucrat b2("Henry", 0);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

	/*
	**	TEST 3: create a bureaucrat with minimum grade, decrement his grade
	*/
		Bureaucrat b3("Jacques", 150);
		try
		{
			b3.decrementGrade();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		return (0);
}