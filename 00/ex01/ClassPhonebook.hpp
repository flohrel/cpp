#ifndef CLASSPHONEBOOK_H
# define CLASSPHONEBOOK_H

#include "ClassContact.hpp"

class   Phonebook
{
    public:
        Phonebook(void);
        ~Phonebook(void);

        void    addContact(void); // DOIT APPELER LE CONSTRUCTEUR CONTACT

    private:
        int     _nbContact;
        Contact _contact[8];
};

#endif // !CLASSPHONEBOOK_H