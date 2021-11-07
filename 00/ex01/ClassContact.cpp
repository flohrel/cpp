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
    << this->_index
    << "|"
    << std::setw(10) << truncateEntry(this->_firstName, 10) + "|" 
    << std::setw(10) << truncateEntry(this->_lastName, 10) + "|"
    << std::setw(10) << truncateEntry(this->_nickName, 10)
    << std::endl;
    return ;
}

void    Contact::fullDisplay(void) const
{
    std::cout
    << this->_firstName << std::endl
    << this->_lastName << std::endl
    << this->_nickName << std::endl
    << this->_phoneNumber << std::endl
    << this->_darkestSecret << std::endl;
    return ;
}