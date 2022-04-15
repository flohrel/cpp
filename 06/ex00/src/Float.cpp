# include "Float.hpp"

Float::Float( void )
{ return; }

Float::Float( const std::string &str, e_type type )
: Converter(str, type), _f(strtof(str.c_str(), NULL))
{
	_d = strtod(str.c_str(), NULL);
	return;
}

Float::Float( const Float& rhs )
: Converter(rhs)
{ return; }

Float::~Float( void )
{ return; }

char
Float::toChar( void ) const
{
	if ((_d < std::numeric_limits<char>::min()) ||
		(_d > std::numeric_limits<char>::max()) ||
		(_d == std::numeric_limits<double>::infinity()) ||
		(_str.find("nan") != std::string::npos))
	{
		throw (Converter::Overflow());
	}
	if (!std::isprint(static_cast<char>(_d)))
	{
		throw (Converter::NonPrintable());
	}
	return (static_cast<char>(_d));
}

int
Float::toInt( void ) const
{
	if ((_d < std::numeric_limits<int>::min()) ||
		(_d > std::numeric_limits<int>::max()) ||
		(_f == std::numeric_limits<float>::infinity()) ||
		(_str.find("nan") != std::string::npos))
	{
		throw (Converter::Overflow());
	}
	return (static_cast<int>(_d));
}

float
Float::toFloat( void ) const
{
	if (_type == FLOAT)
		return (_f);
	if ((_d < std::numeric_limits<float>::min()) ||
		(_d > std::numeric_limits<float>::max()))
	{
		throw (Converter::Overflow());
	}
	return (static_cast<float>(_d));
}