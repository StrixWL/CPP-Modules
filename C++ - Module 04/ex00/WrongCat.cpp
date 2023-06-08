#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() {
	std::cout << "WrongCat default constructor called" << std::endl;
	_type = "WrongCat";
}
WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called" << std::endl;

}

WrongCat::WrongCat(WrongCat &obj) {
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = obj;
}

WrongCat &WrongCat::operator=(WrongCat &obj) {
	std::cout << "WrongCat default constructor called" << std::endl;
	_type = obj._type;
	return *this;
}

void	WrongCat::makeSound(void) const {
	std::cout << "Meooooow :3" << std::endl;
}
