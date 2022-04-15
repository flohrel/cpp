# include "Factory.hpp"

Factory::Factory( void )
{ return; }

Factory::Factory( const Factory& src )
{
	*this = src;
	return;
}

Factory::~Factory( void )
{ return; }

Factory&
Factory::operator=( const Factory& rhs )
{
	(void)rhs;
	return (*this);
}

e_type
Factory::getType( std::string arg )
{
	if ((arg.length() == 1) && (std::isprint(static_cast<char>(arg[0]))))
	{
		return (CHAR);
	}
	else if ((arg.find(".") != std::string::npos) ||
			(arg.find("nan") != std::string::npos) ||
			(arg.find("inf") != std::string::npos))
	{
		if ((*(arg.end() - 1) == 'f') && (*(arg.end() - 2) != 'n'))
		{
			return (FLOAT);
		}
		return (DOUBLE);
	}
	return (INT);
}

Converter*	Factory::makeConverter( const char * str )
{
	std::string	arg(str);
	e_type		type = getType(arg);

	if (type == CHAR)
		return (new Converter(str, type));
	else if (type == INT)
		return (new Int(str, type));
	else
		return (new Float(str, type));
}