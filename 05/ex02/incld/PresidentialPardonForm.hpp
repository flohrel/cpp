#ifndef __PRESIDENTIALPARDONFORM__H__
#define __PRESIDENTIALPARDONFORM__H__

#include "Form.hpp"

class PresidentialPardonForm: public Form
{
	public:
		PresidentialPardonForm( std::string target );

		void	execute(Bureaucrat const & executor) const;

		
};

#endif