#ifndef CONTACT_HPP

#include <string>

enum dataField {
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
		std::string	phoneNumber;
		std::string	darkestSecret;
		std::string	*data[5];
	public:
		std::string	nickname;
		Contact(void);
		std::string	getData(dataField field);
		void		requestData(dataField field);
		void		display(void);
};

#define CONTACT_HPP
#endif
