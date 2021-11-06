#ifndef CLASSPHONEBOOK_H
# define CLASSPHONEBOOK_H

#include "ClassContact.hpp"

class   Phonebook
{
	private:
		int		_nbContact;
		Contact	_contact[8];
	
	public:
		Phonebook(void);
		~Phonebook(void);

		void	addContact(void);
		bool	isFull(void) const;
		void	listContact(void) const;
};

#endif // !CLASSPHONEBOOK_H