#include "Karen.hpp"

void	Karen::_debug( void )
{
	std::cout <<
	"I love to get extra bacon for my "
	"7XL-double-cheese-triple-pickle-special-ketchup burger. "
	<< std::endl <<
	"I just love it!"
	<< std::endl;
}

void	Karen::_info( void )
{
	std::cout <<
	"I cannot believe adding extra bacon "
	"cost more money. You don’t put enough! "
	<< std::endl <<
	"If you did I would not have to ask for it!"
	<< std::endl;
}

void	Karen::_warning( void )
{
	std::cout <<
	"I think I deserve to have some extra bacon for free. "
	<< std::endl <<
	"I’ve been coming here for years and "
	"you just started working here last month."
	<< std::endl;
}

void	Karen::_error( void )
{
	std::cout << 
	"This is unacceptable, I want to speak to the manager now."
	<< std::endl;
}

void	Karen::complain( std::string level )
{
	std::string	lvls[4] =
	{
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	int i;
	for (i = 0; i < 4; i++)
		if (level == lvls[i])
			break;
	switch (i)
	{
		case 0:
			std::cout << "[" + lvls[0] + "]" << std::endl;
			this->_debug();
			std::cout << std::endl;
			__attribute__ ((fallthrough));
		case 1:
			std::cout << "[" + lvls[1] + "]" << std::endl;
			this->_info();
			std::cout << std::endl;
			__attribute__ ((fallthrough));
		case 2:
			std::cout << "[" + lvls[2] + "]" << std::endl;
			this->_warning();
			std::cout << std::endl;
			__attribute__ ((fallthrough));
		case 3:
			std::cout << "[" + lvls[3] + "]" << std::endl;
			this->_error();
			std::cout << std::endl;
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break ;
	}
}

Karen::Karen( void )
{
	return ;
}

Karen::~Karen( void )
{
	return ;
}