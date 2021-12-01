#ifndef __FORM__H__
#define __FORM__H__

#ifndef VERBOSE
# define VERBOSE 0
#endif

#include <string>
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		std::string const	_name;
		bool				_signed;
		unsigned int const	_signGrade;
		unsigned int const	_execGrade;
		std::string			_target;


	public:
		Form( void );
		Form( std::string name, unsigned int sGrade, unsigned int eGrade );
		Form( std::string name, unsigned int sGrade, unsigned int eGrade, std::string target );
		Form( Form const & src );
		~Form( void );

		Form &	operator=( Form const & rhs );

		std::string			getName( void ) const;
		unsigned int		getSignGrade( void ) const;
		unsigned int		getExecGrade( void ) const;
		std::string			getTarget( void ) const;
		bool				isSigned( void ) const;
		Form &				beSigned( Bureaucrat const & b );
		virtual void		execute(Bureaucrat const & executor) const;

		class NotSignedException: public std::exception
		{
			public:
				virtual char const *	what() const throw();
		};

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

std::ostream&	operator<<( std::ostream & os, Form const & f );

#endif