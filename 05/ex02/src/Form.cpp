#include "Form.hpp"

Form::Form( std::string name, unsigned int sGrade, unsigned int eGrade ) : _name(name), _signed(false), _signGrade(sGrade), _execGrade(eGrade) 
{
	if (sGrade < 1 || eGrade < 1)
		throw (Form::GradeTooHighException());
	if (sGrade > 150 || eGrade > 150)
		throw (Form::GradeTooLowException());
	if (VERBOSE)
		std::cout << "Form constructor called" << std::endl;
	return;
}

Form::Form( std::string name, unsigned int sGrade, unsigned int eGrade, std::string target ) : _name(name), _signed(false), _signGrade(sGrade), _execGrade(eGrade), _target(target)
{
	if (sGrade < 1 || eGrade < 1)
		throw (Form::GradeTooHighException());
	if (sGrade > 150 || eGrade > 150)
		throw (Form::GradeTooLowException());
	if (VERBOSE)
		std::cout << "Form constructor called" << std::endl;
	return;
}

Form::Form( Form const & src ) : _name(src.getName()), _signed(false), _signGrade(src.getSignGrade()), _execGrade(src.getExecGrade()) 
{
	if (VERBOSE)
		std::cout << "Form copy constructor called" << std::endl;
	return;
}

Form::~Form( void )
{
	if (VERBOSE)
		std::cout << "Form destructor called" << std::endl;
	return;
}

Form &	Form::operator=( Form const & rhs )
{
	return ((Form &)rhs);
}

std::string	Form::getName( void ) const
{
	return (this->_name);
}

unsigned int	Form::getSignGrade( void ) const
{
	return (this->_signGrade);
}

unsigned int	Form::getExecGrade( void ) const
{
	return (this->_execGrade);
}

std::string		Form::getTarget( void ) const
{
	return (this->_target);
}

bool	Form::isSigned( void ) const
{
	return (this->_signed);
}
Form &	Form::beSigned( Bureaucrat const & b )
{
	if (b.getGrade() > this->getSignGrade())
	{
		throw (Form::GradeTooLowException());
	}
	this->_signed = true;
	return (*this);
}

void	Form::execute( Bureaucrat const & executor ) const
{
	if (this->isSigned() == false)
	{
		throw (Form::NotSignedException());
	}
	if (executor.getGrade() > this->getExecGrade())
	{
		throw (Form::GradeTooLowException());
	}
}

char const *	Form::NotSignedException::what() const throw()
{
	return ("Form not signed");
}

char const *	Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

char const *	Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

std::ostream&	operator<<( std::ostream & os, Form const & f )
{
	os << f.getName() << ", sign grade: " << f.getSignGrade()
	<< ", exec grade: " << f.getExecGrade() << ", ";
	if (f.isSigned() == false)
		os << "not ";
	os << "signed";
	return (os);
}