#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include <iostream>

int main() {
	Animal *mamak;
	Dog klb;
	mamak = &klb;
	mamak->makeSound();

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();


	const WrongAnimal *not_a_cat = new WrongCat();
	std::cout << not_a_cat->getType() << " " << std::endl;
	not_a_cat->makeSound();

	delete meta;
	delete j;
	delete i;
	delete not_a_cat;
}
