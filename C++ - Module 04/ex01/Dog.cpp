#include "Dog.hpp"
#include "Brain.hpp"
#include <iostream>

Dog::Dog(): _brain(new Brain()) {
	std::cout << "Dog default constructor called" << std::endl;
	_type = "Dog";
}
Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
}

Dog::Dog(Dog &obj) {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = obj;
}

Dog &Dog::operator=(Dog &obj) {
	std::cout << "Dog copy assignment operator called" << std::endl;
	_type = obj._type;
	for (int i = 0; i < 100; i++)
		_brain->get_ideas()[i] = obj._brain->get_ideas()[i];
	return *this;
}

void	Dog::makeSound(void) const {
	std::cout << "BarkK bark! >:v" << std::endl;
}
