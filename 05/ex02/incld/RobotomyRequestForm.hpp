#ifndef __ROBOTOMYREQUESTFORM__H__
#define __ROBOTOMYREQUESTFORM__H__

#include "Form.hpp"
#include <cstdlib>
#include <ctime>

class RobotomyRequestForm: public Form
{
	public:
		RobotomyRequestForm( std::string target );

		void	execute(Bureaucrat const & executor) const;

};

#endif
