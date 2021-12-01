#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : Form("PresidentialPardonForm", 25, 5, target)
{
	return;
}

void	PresidentialPardonForm::execute( Bureaucrat const & executor ) const
{
	try
	{
		Form::execute(executor);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}