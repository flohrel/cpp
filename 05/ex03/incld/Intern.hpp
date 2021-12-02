#ifndef __INTERN__H__
#define __INTERN__H__

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

typedef struct s_forms	t_forms;
struct s_forms
{
	Form *		form;
	std::string	name;
};


class Intern
{
	private:
		t_forms	_formArray[Form::kNbForm];


	public:
		Intern( void );
		Intern( Intern const & src );
		~Intern( void );

		Intern &	operator=( Intern const & rhs );

		Form *	makeForm( std::string formName, std::string target );


};

#endif