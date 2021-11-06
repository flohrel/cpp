#include "ClassPhonebook.hpp"

std::string truncateEntry(std::string str, size_t width)
{
    if (str.length() > width)
        return (str.substr(0, width - 1) + ".");
    else
		return (str);
}

int main(void)
{
	Phonebook	phonebook;

	phonebook.addContact();
	phonebook.listContact();
	return (0);
}