#include "Zombie.hpp"

void	Zombie::_announce( void ) const
{
	std::cout << "<" + this->_name + "> BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie( std::string name ) : _name(name)
{
	std::cout << this->_name << " is back from the dead !" << std::endl;
	this->_announce();
	return ;
}

Zombie::~Zombie( void )
{
	std::cout << this->_name << " returns to ashes !" << std::endl;
	return ;
}