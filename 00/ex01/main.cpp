#include "ClassPhonebook.hpp"

std::string truncateEntry(std::string str, size_t width)
{
    if (str.length() > width)
        return (str.substr(0, width - 1) + ".");
    else
		return (str);
}

void	headerDisplay(void)
{
	std::cout << "------------------------" << std::endl;
	std::cout << "|    Phonebook 2000    |" << std::endl;
	std::cout << "------------------------" << std::endl;
}

int main(void)
{
	Phonebook	phonebook;
	std::string	input;
	int			index;
	bool		exit;

	headerDisplay();
	exit = false;
	while (exit == false)
	{
		std::cout << "> ";
		std::cin >> input;
		if (input.compare("ADD") == 0)
			phonebook.addContact();
		else if (input.compare("SEARCH") == 0)
		{
			phonebook.listContact();
			std::cout << "Type an index to display: ";
			std::cin >> index;
			phonebook.displayContact(index);
		}
		else if (input.compare("EXIT") == 0)
			exit = true;
		else
			std::cout << "Command not found." << std::endl;
	}
	return (0);
}