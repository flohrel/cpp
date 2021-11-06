#ifndef __CLASSCONTACT__H__
#define __CLASSCONTACT__H__

# include <iomanip>
# include <iostream>
# include <string>
# include "main.hpp"

class   Contact
{
    private:
        int         _index;
        std::string _firstName;
        std::string _lastName;
        std::string _nickName;
        std::string _phoneNumber;
        std::string _darkestSecret;

    public:
        Contact(void);
        ~Contact(void);

        void    setContact(std::string first, std::string last, std::string nick, std::string phone, std::string secret, int index);
        void    display(void) const;
};

#endif  //!__CLASSCONTACT__H__