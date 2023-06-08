#include "Cat.hpp"
#include <iostream>

Cat::Cat() {
	std::cout << "Cat default constructor called" << std::endl;
	_type = "Cat";
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(Cat &obj) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = obj;
}

Cat &Cat::operator=(Cat &obj) {
	std::cout << "Cat copy assignment operator called" << std::endl;
	_type = obj._type;
	return *this;
}

void	Cat::makeSound(void) const {
	std::cout << "Meooooow :3" << std::endl;
}
