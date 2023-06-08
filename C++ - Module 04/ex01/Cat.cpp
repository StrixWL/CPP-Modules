#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

Cat::Cat(): _brain(new Brain()) {
	std::cout << "Cat default constructor called" << std::endl;
	_type = "Cat";
}
Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
	delete _brain;
}

Cat::Cat(Cat &obj) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = obj;
}

Cat &Cat::operator=(Cat &obj) {
	std::cout << "Cat copy assignment operator called" << std::endl;
	_type = obj._type;
	for (int i = 0; i < 100; i++)
		_brain->get_ideas()[i] = obj._brain->get_ideas()[i];
	return *this;
}

void	Cat::makeSound(void) const {
	std::cout << "Meooooow :3" << std::endl;
}
