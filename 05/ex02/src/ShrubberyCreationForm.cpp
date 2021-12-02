#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ): Form("ShrubberyCreationForm", 145, 137, target)
{
	return;
}

void	ShrubberyCreationForm::execute( Bureaucrat const & executor ) const
{
	std::ofstream	outFile;

	outFile.exceptions( std::ofstream::badbit | std::ofstream::failbit );
	try
	{
    	outFile.open( this->getTarget().c_str(), std::ios::out );
	}
	catch (const std::ofstream::failure & e)
	{
    	std::cout << e.what() << std::endl;
		return ;
	}
	Form::execute(executor);
	drawTrees(outFile);
	outFile.close();
}

void	drawTrees( std::ofstream & outFile )
{
	outFile
	<< "               ,@@@@@@@," << std::endl
	<< "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl
	<< "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl
	<< "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl
	<< "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl
	<< "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl
	<< "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl
	<< "       |o|        | |         | |" << std::endl
	<< "       |.|        | |         | |" << std::endl
	<< "     \\/ ._\\//_/__/  ,\\_//___\\/.  \\_//__/_" << std::endl;
}