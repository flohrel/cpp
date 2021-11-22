#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void )
{
	this->_name = "";
	this->_hp = 100;
	this->_mp = 50;
	this->_dmg = 20;
	std::cout << "ScavTrap constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap( std::string name )
{
	this->_name = name;
	this->_hp = 100;
	this->_mp = 50;
	this->_dmg = 20;
	std::cout << "ScavTrap constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap( ScavTrap const & src )
{
	*this = src;
	std::cout << "ScavTrap copy constructor called" << std::endl;
	return ;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap destructor called" << std::endl;
	return ;
}

void	ScavTrap::guardGate( void )
{
	std::cout <<
		"ScavTrap " + this->_name + " has enterred in gate keeper mode!"
	<< std::endl;
	return ;
}

void	ScavTrap::attack( std::string const & target ) const
{
	std::cout <<
		"ScavTrap " + this->_name + " attacks " + target
		+ ", causing " << this->_dmg << " points of damage !"
	<< std::endl;
	return ;
}

void	ScavTrap::takeDamage( unsigned int amount )
{
	std::cout <<
		"ScavTrap " + this->_name + " takes " << amount
		<< " points of damage !"
	<< std::endl;
	if (amount >= this->_hp)
	{
		std::cout <<
			"Oh no ! ScavTrap " + this->_name + " iz ded !"
		<< std::endl;
		this->_hp = 0;
	}
	else
		this->_hp -= amount;
	return ;
}

void	ScavTrap::beRepaired( unsigned int amount )
{
	std::cout <<
		"ScavTrap " + this->_name + " gets repaired for " << amount
		<< " hit points !"
	<< std::endl;
	this->_hp += amount;
	return ;
}