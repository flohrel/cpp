#include "Converter.hpp"

Converter::Converter( void )
: _type(NONE), _str(std::string()), _c(0)
{ return; }

Converter::Converter( const std::string& str, e_type type )
: _type(type), _str(str), _c(str[0])
{
	_d = static_cast<double>(_c);
	return ;
}

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
		char c = toChar();
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

char
Converter::toChar( void ) const
{
	return (_c);
}

int
Converter::toInt( void ) const
{
	return (static_cast<int>(_c));
}

float
Converter::toFloat( void ) const
{
	return (static_cast<float>(_c));
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
