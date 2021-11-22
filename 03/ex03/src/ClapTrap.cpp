#include "ClapTrap.hpp"

ClapTrap::ClapTrap( ClapTrap const & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

ClapTrap::ClapTrap( void ) : _name(""), _hp(10), _mp(10), _dmg(0)
{
	std::cout << "ClapTrap constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap( std::string name ) : _name(name), _hp(10), _mp(10), _dmg(0)
{
	std::cout << "ClapTrap constructor called" << std::endl;
	return ;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap destructor called" << std::endl;
	return ;
}

void	ClapTrap::attack( std::string const & target) const
{
	std::cout <<
		"ClapTrap " + this->_name + " attacks " + target
		+ ", causing " << this->_dmg << " points of damage !"
	<< std::endl;
	return ;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	std::cout <<
		"ClapTrap " + this->_name + " takes " << amount
		<< " points of damage !"
	<< std::endl;
	if (amount >= this->_hp)
	{
		std::cout <<
			"Oh no ! ClapTrap " + this->_name + " iz ded !"
		<< std::endl;
		this->_hp = 0;
	}
	else
		this->_hp -= amount;
	return ;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	std::cout <<
		"ClapTrap " + this->_name + " gets repaired for "
		<< amount << " hit points !"
	<< std::endl;
	this->_hp += amount;
	return ;
}