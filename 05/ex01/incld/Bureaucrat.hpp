#ifndef __BUREAUCRAT__H__
#define __BUREAUCRAT__H__

#ifndef VERBOSE
# define VERBOSE 0
#endif

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat
{
	private:
		std::string const	_name;
		unsigned int		_grade;


	public:
		Bureaucrat( std::string name, unsigned int grade );
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat( void );

		Bureaucrat const &	operator=( Bureaucrat const & rhs );

		std::string			getName( void ) const;
		unsigned int		getGrade( void ) const;
		void				incrementGrade( void );
		void				decrementGrade( void );

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