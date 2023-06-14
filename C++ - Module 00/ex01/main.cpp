#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <fstream>

Contact	setContact(void) {
		Contact newContact;
		std::cout << "Enter the contact first name: " << std::endl;
		newContact.requestData(firstName);
		std::cout << "Enter the contact last name: " << std::endl;
		newContact.requestData(lastName);
		std::cout << "Enter the contact nickname: " << std::endl;
		newContact.requestData(nickname);
		std::cout << "Enter the contact phone number: " << std::endl;
		newContact.requestData(phoneNumber);
		std::cout << "Enter the contact darkest secret: " << std::endl;
		newContact.requestData(darkestSecret);
		return newContact;
}

int main(void) {
	PhoneBook myBook;
	// myBook.add(Contact("Brahim0", "El Amri", "0611212342", "hates everyoen", "Strix"));
	// myBook.add(Contact("Brahim1", "El Amri", "0611212342", "hates everyoen", "Strix"));
	// myBook.add(Contact("Brahim2", "El Amri", "0611212342", "hates everyoen", "Strix"));
	// myBook.add(Contact("Brahim3", "El Amri", "0611212342", "hates everyoen", "Strix"));
	// myBook.add(Contact("Brahim5", "El Amri", "0611212342", "hates everyoen", "Strix"));
	// myBook.add(Contact("Brahim6", "El Amri", "0611212342", "hates everyoen", "Strix"));
	// myBook.add(Contact("Brahim7", "El Amri", "0611212342", "hates everyoen", "Strix"));
	// myBook.add(Contact("Brahim8", "El Amri", "0611212342", "hates everyoen", "Strix"));
	// myBook.add(Contact("Brahim9", "El Amri", "0611212342", "hates everyoen", "Strix"));
	// myBook.add(Contact("Brahim10", "El Amri", "0611212342", "hates everyoen", "Strix"));
	while (!std::cin.eof()) {
		std::cout << "salam sahbi, type a command:" << std::endl;
		std::string input;
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
