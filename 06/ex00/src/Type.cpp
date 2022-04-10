#include "Type.hpp"

Type::Type( void ) : _type(NONE), _str("\0"), _c(0), _l(0), _f(0), _d(0)
{
	return;
}

enum e_type	Type::getType( void ) const
{
	if ((this->_str.length() == 1) &&
		(((this->_str[0] >= 'A') && (this->_str[0] <= 'Z')) ||
		((this->_str[0] >= 'a') && (this->_str[0] <= 'z'))))
	{
		return (CHAR);
	}
	else if (((this->_str.find(".") != std::string::npos) ||
		(this->_str.find("nan") != std::string::npos)) ||
		(this->_str.find("inf") != std::string::npos))
	{
		if (*(this->_str.end() - 1) == 'f' && *(this->_str.end() - 2) != 'n')
			return (FLOAT);
		return (DOUBLE);
	}
	return (INT);
}

Type::Type( char const * arg )
{
	this->_str = static_cast<std::string>(arg);
	this->_type = this->getType();
}

Type::Type( Type const & src )
{
	*this = src;
	return;
}

Type::~Type( void )
{
	return;
}

char	Type::toChar( int64_t const l ) const
{
	if (l < std::numeric_limits<char>::min() || l > std::numeric_limits<char>::max())
		throw (Type::Overflow());
	if ((l < ' ') || l >= 127)
		throw (Type::NonPrintable());
	return (static_cast<char>(l));
}

char	Type::toChar( double const d ) const
{
	if (d < std::numeric_limits<char>::min() || d > std::numeric_limits<char>::max() ||
		d == std::numeric_limits<double>::infinity() || this->_str.find("nan") != std::string::npos)
		throw (Type::Overflow());
	if ((d < ' ') || d >= 127)
		throw (Type::NonPrintable());
	return (static_cast<char>(d));
}

char	Type::toChar( float const f ) const
{
	if (f < std::numeric_limits<char>::min() || f > std::numeric_limits<char>::max() ||
		f == std::numeric_limits<float>::infinity() || this->_str.find("nan") != std::string::npos)
		throw (Type::Overflow());
	if ((f < ' ') || f >= 127)
		throw (Type::NonPrintable());
	return (static_cast<char>(f));
}

int32_t	Type::toInt( double const d ) const
{
	if (d < std::numeric_limits<int>::min() || d > std::numeric_limits<int>::max() ||
		d == std::numeric_limits<float>::infinity() || this->_str.find("nan") != std::string::npos)
		throw (Type::Overflow());
	return (static_cast<int>(d));
}

int32_t	Type::toInt( long l ) const
{
	if (l < std::numeric_limits<int>::min() || l > std::numeric_limits<int>::max())
		throw (Type::Overflow());
	return (static_cast<int>(l));
}

float	Type::toFloat( double const d ) const
{
	if (d < std::numeric_limits<float>::min() || d > std::numeric_limits<float>::max())
		throw (Type::Overflow());
	return (static_cast<float>(d));
}

void	Type::fromChar( void )
{
	this->_c = this->_str[0];
	std::cout << "char: " << this->_c << std::endl;
	this->_l = static_cast<int>(this->_c);
	std::cout << "int: " << this->_l << std::endl;
	this->_d = static_cast<double>(this->_c);
	std::cout << "float: " << this->_d << ".0f" << std::endl;
	std::cout << "double: " << this->_d << ".0" << std::endl;
}
#include <iomanip>
void	Type::fromInt( void )
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

void	Type::fromFloat( void )
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

void	Type::fromDouble( void )
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
		std::cout << std::setprecision(1) << std::fixed << this->_f << "f" << std::endl;
	}
	catch(std::exception const & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "double: " << std::setprecision(1) << std::fixed << this->_d << std::endl;
}

void	Type::convert( void )
{
	if (this->_type == CHAR)
		this->fromChar();
	else if (this->_type == INT)
		this->fromInt();
	else if (this->_type == FLOAT)
		this->fromFloat();
	else
		this->fromDouble();
}

Type &	Type::operator=( Type const & rhs )
{
	this->_type = rhs._type;
	this->_str = rhs._str;
	this->_c = rhs._c;
	this->_l = rhs._l;
	this->_f = rhs._f;
	this->_d = rhs._d;
	return (*this);
}

char const *	Type::NonPrintable::what() const throw()
{
	return ("Non displayable");
}

char const *	Type::Overflow::what() const throw()
{
	return ("Impossible");
}
