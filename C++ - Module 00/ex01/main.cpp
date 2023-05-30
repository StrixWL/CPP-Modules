#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>

int main(void) {
	//first name, last name, nickname, phone number, and darkest secret
	PhoneBook myBook;
	myBook.add(Contact("Brahim0", "El Amri0", "Strix0", "0611212432", "hates everyoen"));
	myBook.add(Contact("Brahim1", "El Amri1", "Strix1", "0611212432", "hates everyoen"));
	myBook.add(Contact("Brahim2", "El Amri2", "Strix2", "0611212432", "hates everyoen"));
	myBook.add(Contact("Brahim3", "El Amri3", "Strix3", "0611212432", "hates everyoen"));
	myBook.add(Contact("Brahim4", "El Amri4", "Strixewqdeqsad4", "0611212432", "hates everyoen"));
	myBook.add(Contact("Brahim5", "El Amri5", "Strix5", "0611212432", "hates everyoen"));
	myBook.add(Contact("Brahim6", "El Amrieqweqw6", "Strix6", "0611212432", "hates everyoen"));
	myBook.add(Contact("Brahim7", "El Amri7", "Strix7", "0611212432", "hates everyoen"));
	myBook.add(Contact("Brahim8", "El Amri8", "Strix8", "0611212432", "hates everyoen"));
	myBook.add(Contact("Brahim9", "El Amri9", "Strix9", "0611212432", "hates everyoen"));
	myBook.add(Contact("Brahimewqeqweqweqweqw10", "El Amri10", "Strix10", "0611212432", "hates everyoen"));
	myBook.add(Contact("Brahim11", "El Amri11", "Strix11", "0611212432", "hates everyoen"));
	myBook.add(Contact("Brahim12", "El Amri12", "Strix12", "0611212432", "hates everyoen"));
	myBook.add(Contact("Brahim13", "El Amri13", "Strix13", "0611212432", "hates everyoen"));
	myBook.display();
}
