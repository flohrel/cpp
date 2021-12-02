#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : Form("PresidentialPardonForm", 25, 5, target)
{
	return;
}

void	PresidentialPardonForm::execute( Bureaucrat const & executor ) const
{
	Form::execute(executor);
	std::cout << this->getTarget() << " has been forgiven by Zafod Beeblebrox" << std::endl;
}