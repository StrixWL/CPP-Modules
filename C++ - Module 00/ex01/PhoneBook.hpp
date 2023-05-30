#ifndef PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
	private:
		Contact contacts[8];
		int		index;
		bool	filled;
	public:
		PhoneBook(void);
		void	add(Contact newContact);
		void	display(void);
		Contact	*getContacts(void);
};

#define PHONEBOOK_HPP
#endif
