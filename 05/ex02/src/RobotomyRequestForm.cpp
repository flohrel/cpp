#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : Form("RobotomyRequestForm", 72, 45, target)
{
	return;
}

void	RobotomyRequestForm::execute( Bureaucrat const & executor ) const
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