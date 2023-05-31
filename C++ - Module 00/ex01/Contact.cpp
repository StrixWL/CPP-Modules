#include "Contact.hpp"
#include <string>
#include <iostream>

Contact::Contact(void) {
	data[0] = &firstName,
	data[1] = &lastName,
	data[2] = &nickname,
	data[3] = &phoneNumber,
	data[4] = &darkestSecret;
}

std::string Contact::getData(dataField field) {
	// return *(*this->data + field);
	return *(data[field]);
}

void	Contact::display(void) {
	if (!firstName.size()) {
		std::cout << "Contact not found!" << std::endl;
		return ;
	}
	std::cout << "Contact infos:" << std::endl;
	std::cout << "		First name: " << firstName << std::endl;
	std::cout << "		Last name: " << lastName << std::endl;
	std::cout << "		Nicknake: " << nickname << std::endl;
	std::cout << "		Darkest secret: " << darkestSecret << std::endl;
}

void Contact::requestData(dataField field) {
	std::string input;
	while (!std::cin.eof()) {
		std::getline(std::cin, input);
		if (input.size()) {
			*(data[field]) = input;
			std::cout << std::endl;
			return ;
		}
		else
			std::cout << "Field can't be empty, try again: ";
	}
	std::cout << std::endl << "stdin closed, terminating the process.." << std::endl;
	exit(0);
}
