#include "Contact.hpp"
#include <string>
#include <iostream>

Contact::Contact(void) {}

Contact::Contact(std::string firstName, std::string lastName, std::string nickname, std::string phoneNumber, std::string darkestSecret) :
	firstName(firstName), lastName(lastName), nickname(nickname), phoneNumber(phoneNumber), darkestSecret(darkestSecret) {
	*data = &firstName,
	*(data + 1) = &lastName,
	*(data + 2) = &nickname,
	*(data + 3) = &phoneNumber,
	*(data + 4) = &darkestSecret;
}

std::string Contact::getData(dataType type) {
	return *this->data[type];
}
