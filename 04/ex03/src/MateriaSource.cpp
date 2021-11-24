#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ) : _nbTemplate(0)
{
	for (unsigned int i = 0; i < MateriaSource::_kTemplateNb; i++)
	{
		this->_template[i] = NULL;
	}
	std::cout << "MateriaSource default constructor called" << std::endl;
	return;
}

MateriaSource::MateriaSource( MateriaSource const & src )
{
	this->_nbTemplate = src._nbTemplate;
	for (unsigned int i = 0; i < MateriaSource::_kTemplateNb; i++)
	{
		if (src._template[i] != NULL)
		{
			this->_template[i] = src._template[i]->clone();
		}
	}
	std::cout << "MateriaSource copy constructor called" << std::endl;
	return;
}

MateriaSource::~MateriaSource( void )
{
	for (unsigned int i = 0; i < MateriaSource::_kTemplateNb; i++)
	{
		if (this->_template[i] != NULL)
			delete (this->_template[i]);
	}
	std::cout << "MateriaSource destructor called" << std::endl;
	return;
}

MateriaSource &	MateriaSource::operator=( MateriaSource const & rhs )
{	
	for (unsigned int i = 0; i < MateriaSource::_kTemplateNb; i++)
	{
		if (rhs._template[i] != NULL)
		{
			if (this->_template[i] != NULL)
				delete (this->_template[i]);
			this->_template[i] = rhs._template[i]->clone();
		}
		else
			this->_template[i] = NULL;
	}
	return (*this);
}

void	MateriaSource::learnMateria( AMateria * m )
{
	if (this->_nbTemplate >= MateriaSource::_kTemplateNb)
		std::cout << "This MateriaSource cannot learn any new materia" << std::endl;
	else
	{
		this->_template[this->_nbTemplate] = m;
		this->_nbTemplate++;
	}
}

AMateria *	MateriaSource::createMateria( std::string const & type )
{
	for (unsigned int i = 0; i < MateriaSource::_kTemplateNb; i++)
	{
		if (type == this->_template[i]->getType())
			return (this->_template[i]->clone());
	}
	std::cout << "Materia " + type + " not learned yet" << std::endl;
	return (NULL);
}