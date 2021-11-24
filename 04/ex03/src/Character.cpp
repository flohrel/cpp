#include "Character.hpp"

Character::Character( void ) : _nbMateria(0), _name("")
{
	for (unsigned int i = 0; i < Character::_kInventorySize; i++)
	{
		this->_inventory[i] = NULL;
	}
	std::cout << "Character default constructor called" << std::endl;
	return;
}

Character::Character( std::string const & name )
{
	*this = Character();
	this->_name = name;
	std::cout << "Character constructor called" << std::endl;
	return ;
}

Character::Character( Character const & src )
{
	this->_name = src._name;
	this->_nbMateria = src._nbMateria;
	for (unsigned int i = 0; i < Character::_kInventorySize; i++)
	{
		if (src._inventory[i] != NULL)
		{
			this->_inventory[i] = src._inventory[i]->clone();
		}
	}
	std::cout << "Character copy constructor called" << std::endl;
	return;
}

Character::~Character( void )
{
	for (unsigned int i = 0; i < Character::_kInventorySize; i++)
	{
		if (this->_inventory[i] != NULL)
			delete (this->_inventory[i]);
	}
	std::cout << "Character destructor called" << std::endl;
	return;
}

Character &	Character::operator=( Character const & rhs )
{
	this->_name = rhs._name;
	this->_nbMateria = rhs._nbMateria;
	for (unsigned int i = 0; i < Character::_kInventorySize; i++)
	{
		if (rhs._inventory[i] != NULL)
		{
			if (this->_inventory[i] != NULL)
			{
				delete (this->_inventory[i]);
			}
			this->_inventory[i] = rhs._inventory[i]->clone();
		}
		else
			this->_inventory[i] = NULL;
	}
	std::cout << "Character assignation called" << std::endl;
	return (*this);
}

std::string const &	Character::getName( void ) const
{
	return (this->_name);
}

void	Character::equip( AMateria * m )
{
	unsigned int	i;

	if (this->_nbMateria < Character::_kInventorySize)
	{
		for (i = 0; i < Character::_kInventorySize; i++)
		{
			if (this->_inventory[i] == NULL)
			{
				this->_inventory[i] = m;
				break ;
			}
		}
		this->_nbMateria++;
	}
	else
		std::cout << "Inventory full, cannot equip new materia" << std::endl;
	return ;
}

void	Character::unequip( int idx )
{
	if (idx < 0 || idx >= (int)Character::_kInventorySize)
		std::cout << "Index not found" << std::endl;
	else
		this->_inventory[idx] = NULL;
	return ;
}

void	Character::use( int idx, ICharacter & target )
{
	if (idx < 0 || idx >= (int)Character::_kInventorySize)
		std::cout << "Index not found" << std::endl;
	else
	{
		if (this->_inventory[idx] != NULL)
			this->_inventory[idx]->use(target);
		else
			std::cout << "Materia not found" << std::endl;
	}
	return ;
}