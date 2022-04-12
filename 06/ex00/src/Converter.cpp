#include "Converter.hpp"

Converter::Converter( void )
: _c(0), _str(std::string()), _d(0)
{ return; }

Converter::Converter( const std::string& str, e_type type )
:  _c(str[0]), _str(str), _type(type), _d(strtod(str.c_str(), NULL))
{ return ; }

Converter::Converter( const Converter& src )
{
	*this = src;
	return;
}

Converter::~Converter( void )
{ return; }

Converter&
Converter::operator=( const Converter& rhs )
{
	_str = rhs._str;
	_c = rhs._c;
	_d = rhs._d;
	return (*this);
}

void
Converter::display( void )
{
	std::cout << std::setprecision(1) << std::fixed;
	std::cout << "char: ";
	try {
		unsigned char c = toChar();
		std::cout << "'" << c << "'";
	} catch (const std::exception& e) {
		std::cout << e.what();
	}
	std::cout << std::endl << "int: ";
	try {
		std::cout << toInt();
	} catch (const std::exception& e) {
		std::cout << e.what();
	}
	std::cout << std::endl << "float: ";
	try {
		std::cout << toFloat() << "f";
	} catch (const std::exception& e) {
		std::cout << e.what();
	}
	std::cout << std::endl << "double: " << _d << std::endl;
}

unsigned char
Converter::toChar( void ) const
{
	return (_str[0]);
}

int
Converter::toInt( void ) const
{
	return (static_cast<int>(_d));
}

float
Converter::toFloat( void ) const
{
	return (static_cast<float>(_d));
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
