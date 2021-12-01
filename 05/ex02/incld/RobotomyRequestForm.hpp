#ifndef __ROBOTOMYREQUESTFORM__H__
#define __ROBOTOMYREQUESTFORM__H__

#include "Form.hpp"

class RobotomyRequestForm: public Form
{
	public:
		RobotomyRequestForm( std::string target );

		void	execute(Bureaucrat const & executor) const;

};

#endif