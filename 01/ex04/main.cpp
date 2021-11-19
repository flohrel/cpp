#include <fstream>
#include <iostream>
#include <string>

void	display_usage( void )
{
	std::cout
	<< "USAGE:\t./replace FILENAME OLD_STRING NEW_STRING" << std::endl << std::endl
	<< "DESCRIPTION:" << std::endl
	<< "\tReplace every occurences of \e[3mold_string\e[0m with \e[3mnew_string\e[0m, write the result in \e[3mFILENAME.replace\e[0m" << std::endl;
}

void	search_and_replace( std::ifstream &in_file, std::ofstream &out_file, std::string old_string, std::string new_string )
{
	std::string	buffer;
	std::string	new_buffer;
	size_t		old_pos;
	size_t		new_pos;

	try
	{
		while (std::getline( in_file, buffer ))
		{
			old_pos = 0;
			while ((new_pos = buffer.find( old_string, old_pos )) != std::string::npos)
			{
				new_buffer += (buffer.substr(old_pos, new_pos - old_pos) + new_string);
				old_pos += new_pos + old_string.length();
			}
			if (new_buffer.length())
				out_file << new_buffer << std::endl;
			else
				out_file << buffer << std::endl;
			new_buffer.erase();
		}
	}
	catch(const std::exception& e)
	{
		if (in_file.eof())
            return;
		std::cerr << e.what() << std::endl;
	}
}

std::string	ft_toupper( std::string str )
{
    for (std::string::iterator it = str.begin(); it != str.end(); ++it)
    {
        *it = static_cast<char>( std::toupper( static_cast<unsigned char>(*it) ) );
    }
	return (str);
}

/**
 * @brief open input/output files
 * 
 */
void file_handler( std::ifstream& in_file, std::ofstream& out_file, std::string arg )
{
	in_file.exceptions( std::ifstream::badbit | std::ifstream::failbit );
	out_file.exceptions( std::ofstream::badbit | std::ifstream::failbit );
	try
	{
    	in_file.open( arg.c_str(), std::ios::in );
	}
	catch (const std::ifstream::failure& e)
	{
    	std::cout << e.what() << std::endl;
		return ;
	}
	try
	{
		out_file.open( (ft_toupper( arg ) + ".replace").c_str(), std::ios::out );
	}
	catch (const std::ifstream::failure& e)
	{
    	std::cout << e.what() << std::endl;
	}
}

int	main( int argc, char **argv )
{
	std::ifstream	in_file;
	std::ofstream	out_file;


	if (argc != 4)
	{
		display_usage();
		return (1);
	}
	else
	{
		file_handler(in_file, out_file, argv[1]);
		if (out_file.is_open())
		{
			search_and_replace(in_file, out_file, argv[2], argv[3]);
			out_file.close();
			in_file.close();
		}
	}
	return (0);
}