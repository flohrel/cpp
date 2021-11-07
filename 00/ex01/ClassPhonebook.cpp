#include "ClassPhonebook.hpp"
#include <iostream>
#include <iomanip>

Phonebook::Phonebook(void)
{
	this->_nbContact = 0;
	return ;
}

Phonebook::~Phonebook(void)
{
	return ;
}

bool	Phonebook::isFull(void) const
{
	if (this->_nbContact == 8)
		return (true);
	return (false);
}

void	Phonebook::addContact(void)
{
	std::string	first, last, nick, phone, secret;

	if (this->isFull())
	{
		std::cout << "Phonebook is FULL. Cannot ADD another contact." << std::endl;
		return ;
	}
	std::cout << "New contact form :" << std::endl;
	std::cout << "--> First name: ";
	std::cin >> first;
	std::cout << "--> Last name: ";
	std::cin >> last;
	std::cout << "--> Nickname: ";
	std::cin >> nick;
	std::cout << "--> Phone number: ";
	std::cin >> phone;
	std::cout << "--> Darkest secret: ";
	std::cin >> secret;
	this->_contact[this->_nbContact].setContact(first, last, nick, phone, secret, this->_nbContact);
	this->_nbContact++;
	return ;
}

void	Phonebook::listContact(void) const
{
	for (int i = 0; i < this->_nbContact; i++)
	{
		this->_contact[i].truncDisplay();
	}
}

void	Phonebook::displayContact(int index) const
{
	if (this->_nbContact == 0)
	{
		std::cout << "No contact saved yet." << std::endl;
	}
	else if (index < 0 || index > (this->_nbContact - 1))
	{
		std::cout << "Index not valid." << std::endl;
	}
	else
	{
		this->_contact[index].fullDisplay();
	}
	return ;
}