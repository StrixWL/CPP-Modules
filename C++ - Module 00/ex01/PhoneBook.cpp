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

std::string	formatFieldData(std::string fieldData) {
	return std::string("          ").erase(10 - fieldData.substr(0, 10).size()) + fieldData.substr(0, 9) + ((fieldData.size() > 9) ? "." : "");
}

void	PhoneBook::display(void) {
	std::cout << "XD " << contacts[0].nickname << std::endl;
	std::cout << "XD " << contacts[1].nickname << std::endl;
	std::cout << "XD " << contacts[0].getData(nickname) << std::endl;
	std::cout << "XD " << contacts[1].getData(nickname) << std::endl;
	std::cout << "_____________________________________________" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	if (index == 0 && !filled)
		std::cout << "                   (emtpy)                   " << std::endl;
	for (int i = 0, k = filled ? 8 : index, j = index; i < k; i++, j++) {
		Contact *contact = contacts + j % k;
		std::cout << "|         " << i;
		std::cout << "|" << formatFieldData(contact->getData(firstName));
		std::cout << "|" << formatFieldData(contact->getData(lastName));
		std::cout << "|" << formatFieldData(contact->getData(nickname)) << "|" <<  std::endl;
	}
	std::cout << "---------------------------------------------" << std::endl;
}

int	PhoneBook::requestIndex(void) {
	std::string input;
	std::cout << "Contact index you want to display: ";
	while (!std::cin.eof()) {
		std::getline(std::cin, input);
		if (input.size()) {
			std::cout << std::endl;
			return std::stoi(input);
		}
		else
			std::cout << "Field can't be empty, try again: ";
	}
	std::cout << std::endl << "stdin closed, terminating the process.." << std::endl;
	exit(0);
}
