#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook(void) {
	filled = false;
	index = 0;
}

void PhoneBook::add(Contact newContact) {
	*(contacts + index) = newContact;
	index = ++index % 8;
	if (!index)
		filled = true;
}

Contact *PhoneBook::getContacts(void) {
	return contacts;
}

void	PhoneBook::display(void) {
	for (int i = 0, k = filled ? 8 : index, j = index; i < k; i++, j++) {
		Contact *contact = contacts + j % k;
		std::string
			_firstName = contact->getData(firstName),
			_lastName = contact->getData(lastName),
			_nickname = contact->getData(nickname);
		std::cout << "|         " << i;
		std::cout << "|" << std::string("          ").erase(10 - _firstName.substr(0, 10).size()) << _firstName.substr(0, 9) << ((_firstName.size() > 9) ? "." : "");
		std::cout << "|" << std::string("          ").erase(10 - _lastName.substr(0, 10).size()) << _lastName.substr(0, 9) << ((_lastName.size() > 9) ? "." : "");
		std::cout << "|" << std::string("          ").erase(10 - _nickname.substr(0, 10).size()) << _nickname.substr(0, 9) << ((_nickname.size() > 9) ? "." : "") << "|" <<  std::endl;
	}
}
