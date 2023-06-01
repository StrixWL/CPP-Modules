#include "Contact.hpp"
#include <string>
#include <iostream>

Contact::Contact(void) {

}

std::string *Contact::getDataAddr(dataField field) {
	switch (field) {
	case firstName:
		return &_firstName;
	case lastName:
		return &_lastName;
	case nickname:
		return &_nickname;
	case phoneNumber:
		return &_phoneNumber;
	case darkestSecret:
		return &_darkestSecret;
	}
}

void	Contact::display(void) {
	if (!_firstName.size()) {
		std::cout << "Contact not found!" << std::endl;
		return ;
	}
	std::cout << "Contact infos:" << std::endl;
	std::cout << "		First name: " << _firstName << std::endl;
	std::cout << "		Last name: " << _lastName << std::endl;
	std::cout << "		Nickname: " << _nickname << std::endl;
	std::cout << "		Phone number: " << _phoneNumber << std::endl;
	std::cout << "		Darkest secret: " << _darkestSecret << std::endl;
}

void Contact::requestData(dataField field) {
	std::string input;
	while (!std::cin.eof()) {
		std::getline(std::cin, input);
		if (input.size()) {
			*getDataAddr(field) = input;
			std::cout << std::endl;
			return ;
		}
		else
			std::cout << "Field can't be empty, try again: ";
	}
	std::cout << std::endl << "stdin closed, terminating the process.." << std::endl;
	exit(0);
}
