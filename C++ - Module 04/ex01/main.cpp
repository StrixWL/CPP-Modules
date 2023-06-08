#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include <iostream>

int main() {	
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
		basic.setIdea(std::string("am dumb ") + std::to_string(i) + "\n", i);
	Dog tmp = basic;
	Dog tmp2;
	tmp2 = tmp;
	for (int i = 0; i < 100; i++)
		std::cout << tmp2.getBrain()->getIdeas()[i] << std::endl;
}
