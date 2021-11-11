#include "ClassPhonebook.hpp"

/**
 * @brief Truncate entry to display in contact list
 * 
 * @param str 
 * @param width 
 * @return std::string 
 */
std::string truncateEntry(std::string str, size_t width)
{
    if (str.length() > width)
        return (str.substr(0, width - 1) + ".");
    else
		return (str);
}

void	headerDisplay(void)
{
std::cout << "                                                                                                                                                       " << std::endl;
std::cout << "8 888888888o   8 8888        8     ,o888888o.     b.             8 8 8888888888   8 888888888o       ,o888888o.         ,o888888o.     8 8888     ,88' " << std::endl;
std::cout << "8 8888    `88. 8 8888        8  . 8888     `88.   888o.          8 8 8888         8 8888    `88.  . 8888     `88.    . 8888     `88.   8 8888    ,88'  " << std::endl;
std::cout << "8 8888     `88 8 8888        8 ,8 8888       `8b  Y88888o.       8 8 8888         8 8888     `88 ,8 8888       `8b  ,8 8888       `8b  8 8888   ,88'   " << std::endl;
std::cout << "8 8888     ,88 8 8888        8 88 8888        `8b .`Y888888o.    8 8 8888         8 8888     ,88 88 8888        `8b 88 8888        `8b 8 8888  ,88'    " << std::endl;
std::cout << "8 8888.   ,88' 8 8888        8 88 8888         88 8o. `Y888888o. 8 8 888888888888 8 8888.   ,88' 88 8888         88 88 8888         88 8 8888 ,88'     " << std::endl;
std::cout << "8 888888888P'  8 8888        8 88 8888         88 8`Y8o. `Y88888o8 8 8888         8 8888888888   88 8888         88 88 8888         88 8 8888 88'      " << std::endl;
std::cout << "8 8888         8 8888888888888 88 8888        ,8P 8   `Y8o. `Y8888 8 8888         8 8888    `88. 88 8888        ,8P 88 8888        ,8P 8 888888<       " << std::endl;
std::cout << "8 8888         8 8888        8 `8 8888       ,8P  8      `Y8o. `Y8 8 8888         8 8888      88 `8 8888       ,8P  `8 8888       ,8P  8 8888 `Y8.     " << std::endl;
std::cout << "8 8888         8 8888        8  ` 8888     ,88'   8         `Y8o.` 8 8888         8 8888    ,88'  ` 8888     ,88'    ` 8888     ,88'   8 8888   `Y8.   " << std::endl;
std::cout << "8 8888         8 8888        8     `8888888P'     8            `Yo 8 888888888888 8 888888888P       `8888888P'         `8888888P'     8 8888     `Y8. " << std::endl;
}

int main(void)
{
	Phonebook	phonebook;
	std::string	input;
	std::string	index;

	headerDisplay();
	while (42)
	{
		std::cout << std::endl << "> ";
		if (!(std::getline(std::cin, input)) ||
			input.compare("EXIT") == 0)
		{
			std::cout << "Exitting..." << std::endl;
			break ;
		}
		else if (input.compare("ADD") == 0)
			phonebook.addContact();
		else if (input.compare("SEARCH") == 0)
		{
			phonebook.listContact();
			std::cout << std::endl << "Type an index to display: ";
			if (!std::getline(std::cin, index))
			{
				std::cout << "Exitting..." << std::endl;
				break ;
			}
			phonebook.displayContact(index);
		}
		else if (input.compare("HELP") == 0)
		{
			std::cout << std::endl;
			std::cout << "Command\t|\tDescription" << std::endl;
			std::cout << "------------------------------------------------------" << std::endl;
			std::cout << "ADD:\t|\tadd a new contact to phonebook" << std::endl;
			std::cout << "SEARCH:\t|\tlist contact and contact details" << std::endl;
			std::cout << "EXIT:\t|\tobviously... quit the program !" << std::endl;
		}
		else
			std::cout << "Command not found. Try HELP for more information" << std::endl;
	}
	return (0);
}