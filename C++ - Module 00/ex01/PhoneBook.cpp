#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook(void) {
	_filled = false;
	_index = 0;
}

void PhoneBook::add(Contact newContact) {
	_contacts[_index] = newContact;
	_index = ++_index % 8;
	if (!_index)
		_filled = true;
}

Contact *PhoneBook::getContacts(void) {
	return _contacts;
}

std::string	formatFieldData(std::string fieldData) {
	return std::string("          ").erase(10 - fieldData.substr(0, 10).size()) + fieldData.substr(0, 9) + ((fieldData.size() > 9) ? "." : "");
}                                                                         

void	PhoneBook::display(void) {
	std::cout << "_____________________________________________" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	if (_index == 0 && !_filled)
		std::cout << "                   (emtpy)                   " << std::endl;
	for (int i = 0, k = _filled ? 8 : _index, j = _index; i < k; i++, j++) {
		Contact *contact = _contacts + j % k;
		std::cout << "|         " << i;
		std::cout << "|" << formatFieldData(*contact->getDataAddr(firstName));
		std::cout << "|" << formatFieldData(*contact->getDataAddr(lastName));
		std::cout << "|" << formatFieldData(*contact->getDataAddr(nickname)) << "|" <<  std::endl;
	}
	std::cout << "---------------------------------------------" << std::endl;
}

int	PhoneBook::requestIndex(void) {
	std::string input;
	std::cout << "Contact index you want to display: ";
	while (!std::cin.eof()) {
		std::getline(std::cin, input);
		size_t i = 0;
		for (; i < input.size(); i++) {
			if (!isdigit(input[i]))
				break ;
		}
		if (i == input.size() && std::stoi(input) < 8) {
			std::cout << std::endl;
			return std::stoi(input);
		}
		else
			std::cout << "Input must be a positive integer and less than or equal to 7, please try again: ";
	}
	std::cout << std::endl << "stdin closed, terminating the process.." << std::endl;
	exit(0);
}
