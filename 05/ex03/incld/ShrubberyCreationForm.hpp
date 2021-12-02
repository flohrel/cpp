#ifndef __SHRUBBERYCREATIONFORM__H__
#define __SHRUBBERYCREATIONFORM__H__

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm: public Form
{
	public:
		ShrubberyCreationForm( std::string target );

		void					execute( Bureaucrat const & executor ) const;
		ShrubberyCreationForm *	formFactory( std::string target );

};

void	drawTrees( std::ofstream &outFile );

#endif