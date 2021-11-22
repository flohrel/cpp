#include "FragTrap.hpp"

FragTrap::FragTrap( void )
{
	this->_name = "";
	this->_hp = 100;
	this->_mp = 100;
	this->_dmg = 30;
	std::cout << "FragTrap constructor called" << std::endl;
	return ;
}

FragTrap::FragTrap( std::string name )
{
	this->_name = name;
	this->_hp = 100;
	this->_mp = 100;
	this->_dmg = 30;
	std::cout << "FragTrap constructor called" << std::endl;
	return ;
}

FragTrap::FragTrap( FragTrap const & src )
{
	*this = src;
	std::cout << "FragTrap copy constructor called" << std::endl;
	return ;
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap destructor called" << std::endl;
	return ;
}

void	FragTrap::highFivesGuys( void )
{
	std::cout <<
		"FragTrap " + this->_name + " requests a high five!"
	<< std::endl;
	return ;
}

void	FragTrap::attack( std::string const & target ) const
{
	std::cout <<
		"FragTrap " + this->_name + " attacks " + target
		+ ", causing " << this->_dmg << " points of damage !"
	<< std::endl;
	return ;
}

void	FragTrap::takeDamage( unsigned int amount )
{
	std::cout <<
		"FragTrap " + this->_name + " takes " << amount
		<< " points of damage !"
	<< std::endl;
	if (amount >= this->_hp)
	{
		std::cout <<
			"Oh no ! FragTrap " + this->_name + " iz ded !"
		<< std::endl;
		this->_hp = 0;
	}
	else
		this->_hp -= amount;
	return ;
}

void	FragTrap::beRepaired( unsigned int amount )
{
	std::cout <<
		"FragTrap " + this->_name + " gets repaired for " << amount
		<< " hit points !"
	<< std::endl;
	this->_hp += amount;
	return ;
}