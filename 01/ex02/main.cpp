#include <string>
#include <iostream>

int	main( void )
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "Address of \"string\":\t" << &string << std::endl;
	std::cout << "-> using *stringPTR:\t" << stringPTR << std::endl;
	std::cout << "-> using &stringREF:\t" << &stringREF << std::endl << std::endl;
	std::cout << "\"string\" contents:\t" << string << std::endl;
	std::cout << "-> using *stringPTR:\t" << *stringPTR << std::endl;
	std::cout << "-> using &stringREF:\t" << stringREF << std::endl;
}