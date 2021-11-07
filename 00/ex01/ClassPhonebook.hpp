#ifndef __CLASSPHONEBOOK__H__
#define __CLASSPHONEBOOK__H__

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
		void	displayContact(int index) const;
};

#endif  //!__CLASSPHONEBOOK__H__