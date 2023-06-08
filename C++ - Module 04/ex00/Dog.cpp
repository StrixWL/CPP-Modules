#include "Dog.hpp"
#include <iostream>

Dog::Dog(): Animal() {
	std::cout << "Dog default constructor called" << std::endl;
	_type = "Dog";
}
Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;

}

Dog::Dog(Dog &obj) {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = obj;
}

Dog &Dog::operator=(Dog &obj) {
	std::cout << "Dog default constructor called" << std::endl;
	_type = obj._type;
	return *this;
}

void	Dog::makeSound(void) const {
	std::cout << "BarkK bark! >:v" << std::endl;
}
