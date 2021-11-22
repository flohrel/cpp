#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( std::string name ) : ScavTrap(name), FragTrap(name) 
{
	this->_name = name;
	ClapTrap::_name = name + "__clap__name";
	this->_hp = FragTrap::_hp;
	this->_mp = ScavTrap::_mp;
	this->_dmg = FragTrap::_dmg;
	std::cout << "DiamondTrap constructor called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap( void )
{
	std::cout << "DiamondTrap constructor called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap( DiamondTrap const & src )
{
	*this = src;
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	return ;
}

DiamondTrap::~DiamondTrap( void )
{	
	std::cout << "DiamondTrap destructor called" << std::endl;
	return ;
}

DiamondTrap &	DiamondTrap::operator=( DiamondTrap const & src )
{
	this->_hp = src._hp;
	this->_mp = src._mp;
	this->_dmg = src._dmg;
	this->_name = src._name;
	return (*this);
}

void	DiamondTrap::attack( std::string const & target ) const
{
	ScavTrap::attack(target);
	return ;
}

void	DiamondTrap::takeDamage( unsigned int amount )
{
	std::cout <<
		"DiamondTrap " + this->_name + " takes " << amount
		<< " points of damage !"
	<< std::endl;
	if (amount >= this->_hp)
	{
		std::cout <<
			"Oh no ! DiamondTrap " + this->_name + " iz ded !"
		<< std::endl;
		this->_hp = 0;
	}
	else
		this->_hp -= amount;
	return ;
}

void	DiamondTrap::beRepaired( unsigned int amount )
{
	std::cout <<
		"DiamondTrap " + this->_name + " gets repaired for " << amount
		<< " hit points !"
	<< std::endl;
	this->_hp += amount;
	return ;
}

void	DiamondTrap::whoAmI( void )
{
	std::cout <<
		"Name: " << this->_name
		<< ". Claptrap name: " << ClapTrap::_name
	<< std::endl;
	return ;
}