#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal default constructor called" << std::endl;
}
WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal &obj) {
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = obj;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal &obj) {
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	_type = obj._type;
	return *this;
}

std::string WrongAnimal::getType() const {
	return _type;
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "*definitely not an animal sound*" << std::endl;
}
