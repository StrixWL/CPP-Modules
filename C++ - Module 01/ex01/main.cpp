#include "Zombie.hpp"

int main() {
	int	N = 5;
	Zombie *zombies = zombieHorde(N, "ZOMBIE");

	while (N--)
		zombies[N].announce();
	delete[] zombies;

}
