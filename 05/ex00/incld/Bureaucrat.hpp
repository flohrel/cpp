#ifndef __BUREAUCRAT__H__
#define __BUREAUCRAT__H__

#include <cstdint>
#include <string>
#include <iostream>
#include <exception>

class Bureaucrat
{
	private:
		std::string const	_name;
		uint32_t			_grade;


	public:
		Bureaucrat( void );
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat( void );

		Bureaucrat &	operator=( Bureaucrat const & rhs );

		std::string			getName( void ) const;
		uint32_t			getGrade( void ) const;

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

std::ostream&	operator<<( std::ostream & os, Bureaucrat const & b );

#endif