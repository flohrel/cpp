#ifndef __KAREN__H__
#define __KAREN__H__

#include <string>
#include <iostream>

class Karen
{

private:
	void	_debug( void );
	void	_info( void );
	void	_warning ( void );
	void	_error( void );


public:
	void	complain( std::string level );

	Karen( void );
	~Karen( void );

};

#endif  //!__KAREN__H__