#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <fstream>

Contact	setContact(void) {
		Contact newContact;
		std::cout << "Enter the contact first name: ";
		newContact.requestData(firstName);
		std::cout << "Enter the contact last name: ";
		newContact.requestData(lastName);
		std::cout << "Enter the contact nickname: ";
		newContact.requestData(nickname);
		std::cout << "Enter the contact phone number: ";
		newContact.requestData(phoneNumber);
		std::cout << "Enter the contact darkest secret: ";
		newContact.requestData(darkestSecret);
		return newContact;
}

int main(void) {
	PhoneBook myBook;
	while (!std::cin.eof()) {
		std::cout << "salam sahbi, type a command:" << std::endl << "> ";
		std::string input;
		std::ifstream file("Makefile"); 
		std::getline(std::cin, input);
		if (input == "EXIT")
			exit(0);
		if (input == "SEARCH") {
			myBook.display();
			myBook.getContacts()[myBook.requestIndex()].display();
		}
		if (input == "ADD") {
			myBook.add(setContact());
		}
	}
	std::cout << std::endl << "stdin closed, terminating the process.." << std::endl;
	return (0);
}
