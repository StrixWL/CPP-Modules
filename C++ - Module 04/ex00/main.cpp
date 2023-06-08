#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include <iostream>

int main() {
	AAnimal *mamak;
	Dog klb;
	mamak = &klb;
	mamak->makeSound();

	const AAnimal* meta = new AAnimal();
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
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
