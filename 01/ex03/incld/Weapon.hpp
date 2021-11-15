#ifndef __WEAPON__H__
#define __WEAPON__H__

#include <string>

class Weapon
{

private:
	
	std::string _type;


public:

	Weapon( std::string type );
	~Weapon( void );

	std::string const&	getType( void ) const;
	void				setType( std::string type );

};

#endif  //!__WEAPON__H__