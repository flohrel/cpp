#include "Intern.hpp"

Intern::Intern( void )
{
	this->_formArray[0] = (t_forms){ new ShrubberyCreationForm("template"), "shrubbery creation" };
	this->_formArray[1] = (t_forms){ new PresidentialPardonForm("template"), "presidential pardon" };
	this->_formArray[2] = (t_forms){ new RobotomyRequestForm("template"), "robotomy request" };
	if (VERBOSE)
		std::cout << "Intern constructor called" << std::endl;
	return;
}

Intern::Intern( Intern const & src )
{
	*this = src;
	if (VERBOSE)
		std::cout << "Intern copy constructor called" << std::endl;
	return;
}

Intern::~Intern( void )
{
	for (unsigned int i = 0; i < Form::kNbForm; i++)
		delete (this->_formArray[i].form);
	if (VERBOSE)
		std::cout << "Intern destructor called" << std::endl;
	return;
}

Intern &	Intern::operator=( Intern const & rhs )
{
	if (VERBOSE)
		std::cout << "Intern assignation operator called" << std::endl;
	return ((Intern &)rhs);
}

Form *	Intern::makeForm( std::string name, std::string target )
{
	for (unsigned int i = 0; i < Form::kNbForm; i++)
	{
		if (name == this->_formArray[i].name)
		{
			std::cout << "Intern creates \"" + this->_formArray[i].name + "\"" << std::endl;
			return (this->_formArray[i].form->formFactory(target));
		}
	}
	std::cout << "\"" + name + "\"" + " form not found" << std::endl;
	return (NULL);
}