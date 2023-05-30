#ifndef CONTACT_HPP

#include <string>

enum dataType {
	firstName,
	lastName,
	nickname,
	phoneNumber,
	darkestSecret
};

class Contact {
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
		std::string	phoneNumber;
		std::string	darkestSecret;
		std::string	*data[5];
	public:
		Contact(void);
		Contact(std::string firstName, std::string lastName, std::string nickname, std::string phoneNumber, std::string darkestSecret);
		std::string	getData(dataType type);
};

#define CONTACT_HPP
#endif
