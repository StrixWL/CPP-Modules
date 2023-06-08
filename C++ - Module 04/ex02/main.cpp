#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include <iostream>

int main() {	
	AAnimal *a = new Dog();
	a->makeSound();
	delete a;
	// AAnimal *b = new AAnimal(); // WONT COMPILE
	// AAnimal c(); // WONT COMPILE
}
