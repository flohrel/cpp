#include "ClassContact.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact()
{
    return ;
}

void    Contact::setContact(std::string first, std::string last, std::string nick, std::string phone, std::string secret, int index)
{
    this->_firstName = first;
    this->_lastName = last;
    this->_nickName = nick;
    this->_phoneNumber = phone;
    this->_darkestSecret = secret;
    this->_index = index;
    return ;
}

void    Contact::truncDisplay(void) const
{
    std::cout
    << std::setw(10) << truncateEntry(this->_firstName, 10) << "|" 
    << std::setw(10) << truncateEntry(this->_lastName, 10) << "|"
    << std::setw(10) << truncateEntry(this->_nickName, 10) << "|"
    << std::setw(10) << this->_index
    << std::endl;
    return ;
}

void    Contact::fullDisplay(void) const
{
    std::cout
    << "Firstname:\t" << this->_firstName << std::endl
    << "Last name:\t" << this->_lastName << std::endl
    << "Nickname:\t" << this->_nickName << std::endl
    << "Phone number:\t" << this->_phoneNumber << std::endl
    << "Darkest secret:\t" << this->_darkestSecret << std::endl;
    return ;
}