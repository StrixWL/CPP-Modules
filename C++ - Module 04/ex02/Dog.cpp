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

Dog::Dog(Dog &obj): _brain(new Brain()) {
	std::cout << "Dog copy constructor called" << std::endl;
	_type = "Dog";
	*this = obj;
}

Dog &Dog::operator=(Dog &obj) {
	std::cout << "Dog copy assignment operator called" << std::endl;
	_type = obj._type;
	for (int i = 0; i < 100; i++)
		_brain->getIdeas()[i] = obj._brain->getIdeas()[i];
	return *this;
}

void	Dog::makeSound(void) const {
	std::cout << "BarkK bark! >:v" << std::endl;
}

void	Dog::setIdea(std::string idea, int index) {
	_brain->getIdeas()[index] = idea;
}

Brain *Dog::getBrain(void) {
	return _brain;
}
