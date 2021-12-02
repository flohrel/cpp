#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main( void )
{
	/*
	**	TEST 1: create a bureaucrat, increment his grade and display details with << overload
	*/
		{
			std::cout << "< TEST 1 >" << std::endl;

			Bureaucrat b1 = Bureaucrat("Bob", 42);
			b1.incrementGrade();
			std::cout << b1 << std::endl;
		}
		std::cout << std::endl;

	/*
	**	TEST 2: create a bureaucrat with grade too high
	*/
		{
			std::cout << "< TEST 2 >" << std::endl;

			try
			{
				Bureaucrat b2("Henry", 0);
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << std::endl;
			}
		}
		std::cout << std::endl;

	/*
	**	TEST 3: create a bureaucrat with minimum grade, decrement his grade
	*/
		{
			std::cout << "< TEST 3 >" << std::endl;

			Bureaucrat b3("Jacques", 150);
			try
			{
				b3.decrementGrade();
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << std::endl;
			}
		}
		std::cout << std::endl;
		
	/*
	**	TEST 4: create a form from another one (need VERBOSE mode)
	*/
		{
			std::cout << "< TEST 4 >" << std::endl;

			Form	f1("foo", 21, 42);
			Form	f2 = Form(f1);
		}
		std::cout << std::endl;
	
	/*
	**	TEST 5: fail to sign a form with a Bureaucrat
	*/
		{
			std::cout << "< TEST 5 >" << std::endl;

			Bureaucrat	b("Bob", 42);
			Form		f("foo", 21, 42);
			try
			{
				b.signForm(f);
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << std::endl;
			}
		}
		std::cout << std::endl;
	
	/*
	**	TEST 6: call beSigned on a form with Bureaucrat too low, then sign it with another one;
	*/
		{
			std::cout << "< TEST 6 >" << std::endl;

			Bureaucrat	b1("Bob", 42);
			Bureaucrat	b2("John", 105);
			Form		f("bar", 54, 98);

			std::cout << f << std::endl;
			try
			{
				f.beSigned(b1);
			}
			catch (const std::exception & e)
			{
				std::cerr << e.what() << std::endl;
			}
			b2.signForm(f);
			std::cout << f << std::endl;
		}
		std::cout << std::endl;

	/*
	**	TEST 7
	*/
		{
			std::cout << "< TEST 7 >" << std::endl;

			Bureaucrat				b("Jean-Eude", 42);
			ShrubberyCreationForm	test("file");
			RobotomyRequestForm		test2("Foo");
			PresidentialPardonForm	test3("Bar");

			b.signForm(test);
			b.signForm(test3);
			b.executeForm(test2);
			b.executeForm(test3);
			b.executeForm(test);
		}
		std::cout << std::endl;
	
	return (0);
}