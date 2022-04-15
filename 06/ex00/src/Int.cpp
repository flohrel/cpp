#include "Int.hpp"

Int::Int( void )
{ return; }

Int::Int( const std::string& str, e_type type )
: Converter(str, type), _l(strtol(str.c_str(), NULL, 10))
{
	_d = static_cast<double>(_l);
	return;
}

Int::Int( const Int& rhs )
: Converter(rhs)
{
	_l = rhs._l;
	return;
}

Int::~Int( void )
{ return; }

Int&
Int::operator=( const Int& rhs )
{
	_str = rhs._str;
	_l = rhs._l;
	return (*this);
}

char
Int::toChar( void ) const
{
	if ((_l < std::numeric_limits<char>::min()) ||
		(_l > std::numeric_limits<char>::max()))
	{
		throw (Converter::Overflow());
	}
	if (!std::isprint(static_cast<char>(_l)))
	{
		throw (Converter::NonPrintable());
	}
	return (static_cast<char>(_l));
}

int
Int::toInt( void ) const
{
	if ((_l < std::numeric_limits<int>::min()) ||
		(_l > std::numeric_limits<int>::max()))
	{
		throw (Converter::Overflow());
	}
	return (static_cast<int>(_l));
}

float
Int::toFloat( void ) const
{
	return (static_cast<float>(_l));
}