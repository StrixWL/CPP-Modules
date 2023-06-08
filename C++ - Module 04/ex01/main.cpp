#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include <iostream>

void f() {
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;
	//...
	Animal *animals[20];
	for (int i = 0, j = 10; i < 10; i++, j++) {
		animals[i] = new Dog();
		animals[j] = new Cat();
	}
	for (int i = 0; i < 20; i++)
		delete animals[i];
	Dog basic;
	{
		Dog tmp = basic;
	}
}

int main() {
	f();
	while(1);
}
