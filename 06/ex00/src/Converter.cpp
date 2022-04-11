#include "Converter.hpp"

e_type
Converter::getType( void ) const
{
	if ((this->_str.length() == 1) && (std::isprint(_str[0])))
	{
		return (CHAR);
	}
	else if ((this->_str.find(".") != std::string::npos) ||
			(this->_str.find("nan") != std::string::npos) ||
			(this->_str.find("inf") != std::string::npos))
	{
		if ((*(this->_str.end() - 1) == 'f') && (*(this->_str.end() - 2) != 'n'))
		{
			return (FLOAT);
		}
		return (DOUBLE);
	}
	return (INT);
}

Converter::Converter( void )
: _str("\0"), _c(0), _l(0), _f(0), _d(0), _type(NONE)
{ 
	for (unsigned i = 0; i < Converter::kNbConversion; i++)
	{
		_convert[i] = NULL;
	}
	return;
}

Converter::Converter( Converter const & src )
{
	*this = src;
	return;
}

Converter::~Converter( void )
{ return; }

Converter&
Converter::operator=( Converter const & rhs )
{
	this->_type = rhs._type;
	this->_str = rhs._str;
	this->_c = rhs._c;
	this->_l = rhs._l;
	this->_f = rhs._f;
	this->_d = rhs._d;
	return (*this);
}

char
Converter::toChar( long long const l ) const
{
	if (l < std::numeric_limits<char>::min() || l > std::numeric_limits<char>::max())
		throw (Converter::Overflow());
	if (std::isprint(static_cast<unsigned char>(_l)))
		throw (Converter::NonPrintable());
	return (static_cast<unsigned char>(l));
}

char
Converter::toChar( double const d ) const
{
	if (d < std::numeric_limits<char>::min() || d > std::numeric_limits<char>::max() ||
		d == std::numeric_limits<double>::infinity() || this->_str.find("nan") != std::string::npos)
		throw (Converter::Overflow());
	if (std::isprint(static_cast<unsigned char>(_l)))
		throw (Converter::NonPrintable());
	return (static_cast<unsigned char>(d));
}

int
Converter::toInt( double const d ) const
{
	if (d < std::numeric_limits<int>::min() || d > std::numeric_limits<int>::max() ||
		d == std::numeric_limits<float>::infinity() || this->_str.find("nan") != std::string::npos)
		throw (Converter::Overflow());
	return (static_cast<int>(d));
}

int
Converter::toInt( long long l ) const
{
	if (l < std::numeric_limits<int>::min() || l > std::numeric_limits<int>::max())
		throw (Converter::Overflow());
	return (static_cast<int>(l));
}

float
Converter::toFloat( double const d ) const
{
	if (d < std::numeric_limits<float>::min() || d > std::numeric_limits<float>::max())
		throw (Converter::Overflow());
	return (static_cast<float>(d));
}

void
Converter::fromChar( void )
{
	this->_c = this->_str[0];
	std::cout << "char: " << this->_c << std::endl;
	this->_l = static_cast<int>(this->_c);
	std::cout << "int: " << this->_l << std::endl;
	this->_d = static_cast<double>(this->_c);
	std::cout << "float: " << this->_d << ".0f" << std::endl;
	std::cout << "double: " << this->_d << ".0" << std::endl;
}

void
Converter::fromInt( void )
{
	this->_l = strtol(this->_str.c_str(), NULL, 10);
	std::cout << "char: ";
	try
	{
		this->_c = this->toChar(this->_l);
		std::cout << "'" << this->_c << "'" << std::endl;
	}
	catch ( std::exception const & e )
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "int: ";
	try
	{
		this->_i = this->toInt(this->_l);
		std::cout << this->_i << std::endl;
	}
	catch ( std::exception const & e )
	{
		std::cerr << e.what() << std::endl;
	}
	this->_d = static_cast<double>(this->_l);
	std::cout << "float: " << this->_d << ".0f" << std::endl;
	std::cout << "double: " << this->_d << ".0" << std::endl;
}

void
Converter::fromFloat( void )
{
	this->_f = strtof(this->_str.c_str(), NULL);
	std::cout << "char: ";
	try
	{
		this->_c = this->toChar(this->_f);
		std::cout << "'" << this->_c << "'" << std::endl;
	}
	catch ( std::exception const & e )
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "int: ";
	try
	{
		this->_i = this->toInt(this->_f);
		std::cout << this->_i << std::endl;
	}
	catch ( std::exception const & e )
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "float: "  << std::setprecision(1) << std::fixed << this->_f << "f" << std::endl;
	std::cout << "double: "  << std::setprecision(1) << std::fixed << this->_f << std::endl;
}

void
Converter::fromDouble( void )
{
	this->_d = strtod(this->_str.c_str(), NULL);
	std::cout << "char: ";
	try
	{
		this->_c = this->toChar(this->_d);
		std::cout << "'" << this->_c << "'" << std::endl;
	}
	catch ( std::exception const & e )
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "int: ";
	try
	{
		this->_i = this->toInt(this->_d);
		std::cout << this->_i << std::endl;
	}
	catch ( std::exception const & e )
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "float: ";
	try
	{
		this->_f = this->toFloat(this->_d);
		std::cout << static_cast<float>(this->_f) << "f" << std::endl;
	}
	catch(std::exception const & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "double: " << static_cast<float>(this->_d) << std::endl;
}

Converter::Converter( char const * arg )
: _str(static_cast<std::string>(arg)), _type(getType())
{
	_convert[0] = &Converter::fromChar;
	_convert[1] = &Converter::fromInt;
	_convert[2] = &Converter::fromFloat;
	_convert[3] = &Converter::fromDouble;
	_convert[4] = NULL;
	return ;
}

const char*
Converter::NonPrintable::what() const throw()
{
	return ("Non displayable");
}

const char*
Converter::Overflow::what() const throw()
{
	return ("Impossible");
}
