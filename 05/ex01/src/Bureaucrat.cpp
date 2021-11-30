#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( std::string name, unsigned int grade ) : _name(name)
{
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	this->_grade = grade;
	if (VERBOSE)
		std::cout << "Bureaucrat constructor called" << std::endl;
	return;
}

Bureaucrat::Bureaucrat( Bureaucrat const & src )
{
	*this = src;
	if (VERBOSE)
		std::cout << "Bureaucrat copy constructor called" << std::endl;
	return;
}

Bureaucrat::~Bureaucrat( void )
{
	if (VERBOSE)
		std::cout << "Bureaucrat constructor called" << std::endl;
	return;
}

Bureaucrat const &	Bureaucrat::operator=( Bureaucrat const & rhs )
{
	if (VERBOSE)
		std::cout << "Bureaucrat assignation called" << std::endl;
	return (rhs);
}

std::string		Bureaucrat::getName( void ) const
{
	return (this->_name);
}

unsigned int	Bureaucrat::getGrade( void ) const
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

void	Bureaucrat::incrementGrade( void )
{
	if ((this->_grade - 1) < 1)
		throw (Bureaucrat::GradeTooHighException());
	this->_grade--;
	return ;
}

void	Bureaucrat::decrementGrade( void )
{
	if ((this->_grade + 1) > 150)
		throw (Bureaucrat::GradeTooLowException());
	this->_grade++;
	return ;
}

std::ostream&	operator<<( std::ostream & os, Bureaucrat const & b )
{
	os << b.getName() << ", bureaucrat grade " << b.getGrade();
	return (os);
}