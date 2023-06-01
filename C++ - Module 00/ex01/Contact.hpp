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
		std::string	_firstName;
		std::string	_lastName;
		std::string	_phoneNumber;
		std::string	_darkestSecret;
		std::string	_nickname;
	public:
		Contact(void);
		std::string	*getDataAddr(dataField field);
		void		requestData(dataField field);
		void		display(void);
};

#define CONTACT_HPP
#endif
