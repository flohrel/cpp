#include "Form.hpp"

Form::Form( std::string name, unsigned int sGrade, unsigned int eGrade ) : _name(name), _signed(false), _signGrade(sGrade), 
{
	if (sGrade < 1 || eGrade < 1)
		throw (Form::GradeTooHighException());
	if (sGrade > 150 || eGrade > 150)
		throw (Form::GradeTooLowException());
	this->_signGrade = sGrade;
	this->_execGrade = eGrade;
	if (VERBOSE)
		std::cout << "Bureaucrat constructor called" << std::endl;
	return;
}

Form::Form( Form const & src )
{
	*this = src;
	return;
}

Form::~Form( void )
{
	/* Content */
	return;
}

Form &	Form::operator=( Form const & rhs )
{
	/* Content */
	*this = rhs;
	return (*this);
}

char const *	Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

char const *	Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}