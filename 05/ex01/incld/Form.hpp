#ifndef __FORM__H__
#define __FORM__H__

#ifndef VERBOSE
# define VERBOSE 0
#endif

#include <string>
#include <iostream>
#include <exception>

class Form
{
	private:
		std::string const	_name;
		bool				_signed;
		unsigned int const	_signGrade;
		unsigned int const	_execGrade;


	public:
		Form( std::string name, unsigned int sGrade, unsigned int eGrade );
		Form( Form const & src );
		~Form( void );

		Form &	operator=( Form const & rhs );

		class GradeTooHighException: public std::exception
		{
			public:
				virtual char const *	what() const throw();
		};
		
		class GradeTooLowException: public std::exception
		{
			public:
				virtual char const *	what() const throw();
		};

};

#endif