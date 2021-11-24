#ifndef __MATERIASOURCE__H__
#define __MATERIASOURCE__H__

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		static unsigned int const	_kTemplateNb = 4;
		unsigned int				_nbTemplate;
		AMateria *					_template[MateriaSource::_kTemplateNb];


	public:
		MateriaSource( void );
		MateriaSource( MateriaSource const & src );
		~MateriaSource( void );

		MateriaSource &	operator=( MateriaSource const & rhs );

		void		learnMateria( AMateria * m );
		AMateria*	createMateria( std::string const & type );

};

#endif