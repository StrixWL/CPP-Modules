#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>

int main(void) {
	//first name, last name, nickname, phone number, and darkest secret
	PhoneBook myBook;
	myBook.add(Contact("Brahim", "El Amri", "Strix0", "0611212432", "hates everyoen"));
	myBook.add(Contact("Brahim", "El Amri", "Strix1", "0611212432", "hates everyoen"));
	myBook.add(Contact("Brahim", "El Amri", "Strix2", "0611212432", "hates everyoen"));
	myBook.add(Contact("Brahim", "El Amri", "Strix3", "0611212432", "hates everyoen"));
	myBook.add(Contact("Brahim", "El Amri", "Strix4", "0611212432", "hates everyoen"));
	myBook.add(Contact("Brahim", "El Amri", "Strix5", "0611212432", "hates everyoen"));
	myBook.add(Contact("Brahim", "El Amri", "Strix6", "0611212432", "hates everyoen"));
	myBook.add(Contact("Brahim", "El Amri", "Strix7", "0611212432", "hates everyoen"));
	myBook.add(Contact("Brahim", "El Amri", "Strix8", "0611212432", "hates everyoen"));
	myBook.add(Contact("Brahim", "El Amri", "Strix9", "0611212432", "hates everyoen"));
	myBook.add(Contact("Brahim", "El Amri", "Strix10", "0611212432", "hates everyoen"));
	myBook.add(Contact("Brahim", "El Amri", "Strix11", "0611212432", "hates everyoen"));
	myBook.add(Contact("Brahim", "El Amri", "Strix12", "0611212432", "hates everyoen"));
	myBook.add(Contact("Brahim", "El Amri", "Strix13", "0611212432", "hates everyoen"));
	myBook.display();
}
