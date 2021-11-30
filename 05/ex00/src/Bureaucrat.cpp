#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void )
{
	/* Content */
	return;
}

Bureaucrat::Bureaucrat( Bureaucrat const & src )
{
	*this = src;
	return;
}

Bureaucrat::~Bureaucrat( void )
{
	/* Content */
	return;
}

Bureaucrat &	Bureaucrat::operator=( Bureaucrat const & rhs )
{
	/* Content */
	*this = rhs;
	return (*this);
}

std::string		Bureaucrat::getName( void ) const
{
	return (this->_name);
}

uint32_t	Bureaucrat::getGrade( void ) const
{
	return (this->_grade);
}

char const *	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

char const *	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

std::ostream&	operator<<( std::ostream & os, Bureaucrat const & b )
{
	os << b.getName() << ", bureaucrat grade " << b.getGrade();
	return (os);
}