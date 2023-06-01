#include "Zombie.hpp"
#include <iostream>

int main(void) {
	Zombie *zombie = newZombie("zombie1");
	std::cout << sizeof(zombie) << std::endl;
	zombie->announce();
	randomChump("zombie2");
	delete zombie;
}
