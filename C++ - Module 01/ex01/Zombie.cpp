#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void) {
}

Zombie::Zombie(std::string name): _name(name) {
}

void	Zombie::name(std::string name) {
	_name = name;
}

void	Zombie::announce(void) {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() {
	std::cout << _name << " died :(" << std::endl;
}
