#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook(void) {
	filled = false;
	index = 0;
}

void PhoneBook::add(Contact newContact) {
	contacts[index] = newContact;
	index = ++index % 8;
	if (!index)
		filled = true;
}

Contact *PhoneBook::getContacts(void) {
	return contacts;
}

void	PhoneBook::display(void) {
	for (int i = 0, k = (filled ? 8 : index), j = index; i < k; i++, j++) {
		std::cout << contacts[j % k].getData(nickname) << std::endl;
	}
}
