#ifndef CLASSCONTACT_H
# define CLASSCONTACT_H

# include <string>

class   Contact
{
    public:
        Contact(std::string first, std::string last, std::string nick, std::string phone, std::string secret);
        ~Contact(void);
    private:
        int         _index;
        std::string _firstName;
        std::string _lastName;
        std::string _nickName;
        std::string _phoneNumber;
        std::string _darkestSecret;
};

#endif // !CLASSCONTACT_H