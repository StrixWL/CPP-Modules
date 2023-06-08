#include "AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal() {
	std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::~AAnimal() {
	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal &obj) {
	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = obj;
}

AAnimal &AAnimal::operator=(AAnimal &obj) {
	std::cout << "AAnimal copy assignment operator called" << std::endl;
	_type = obj._type;
	return *this;
}

std::string AAnimal::getType() const {
	return _type;
}
