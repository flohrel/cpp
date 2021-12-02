#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : Form("robotomy request", 72, 45, target)
{
	return;
}

void	RobotomyRequestForm::execute( Bureaucrat const & executor ) const
{
	Form::execute(executor);
	std::srand(std::time(NULL));
	std::cout << "* Drill noise *" << std::endl;
	std::cout << Form::getTarget();
	if (std::rand() % 2)
		std::cout << " has been successfully robotomised !";
	else
		std::cout << " robotomy failed. It's now a vegetable.";
	std::cout << std::endl;
}

RobotomyRequestForm *	RobotomyRequestForm::formFactory( std::string target )
{
	return (new RobotomyRequestForm(target));
}