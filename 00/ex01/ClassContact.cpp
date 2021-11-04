#include "ClassContact.hpp"

Contact::Contact(std::string first, std::string last, std::string nick, std::string phone, std::string secret)
: _firstName(first), _lastName(last), _nickName(nick), _phoneNumber(phone), _darkestSecret(secret)
{
    return ;
}

Contact::~Contact()
{
    return ;
}