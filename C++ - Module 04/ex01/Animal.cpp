#include "Animal.hpp"
#include <iostream>

Animal::Animal() {
	std::cout << "Animal default constructor called" << std::endl;
}
Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(Animal &obj) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = obj;
}

Animal &Animal::operator=(Animal &obj) {
	std::cout << "Animal copy assignment operator called" << std::endl;
	_type = obj._type;
	return *this;
}

std::string Animal::getType() const {
	return _type;
}

void	Animal::makeSound(void) const {
	std::cout << "*random animal sound*" << std::endl;
}
