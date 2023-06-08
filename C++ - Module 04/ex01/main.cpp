#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include <iostream>

void f() {
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
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
	for (int i = 0; i < 100; i++)
		basic._brain->get_ideas()[i] = std::string("am dumb ") + std::to_string(i) + "\n";
	for (int i = 0; i < 100; i++)
		std::cout << basic._brain->get_ideas()[i] << std::endl;
	Dog tmp = basic;
	Dog tmp2;
	tmp2 = tmp;
	std::cout << "XD?" << std::endl;
}

int main() {
	f();
	while(1);
}
