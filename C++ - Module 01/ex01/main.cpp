#include "Zombie.hpp"

int main() {
	int	N = 5;
	Zombie *zombies = zombieHorde(N, "mamak");

	while (N--)
		zombies[N].announce();
	delete[] zombies;
	while (1);
}