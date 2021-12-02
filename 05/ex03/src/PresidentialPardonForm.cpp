#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : Form("presidential pardon", 25, 5, target)
{
	return;
}

void	PresidentialPardonForm::execute( Bureaucrat const & executor ) const
{
	Form::execute(executor);
	std::cout << this->getTarget() << " has been forgiven by Zafod Beeblebrox" << std::endl;
}

PresidentialPardonForm *	PresidentialPardonForm::formFactory( std::string target )
{
	return (new PresidentialPardonForm(target));
}