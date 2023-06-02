#ifndef ZOMBIE_HPP

#include <string>

class Zombie {
	private:
		std::string _name;
	public:
		Zombie();
		~Zombie();
		Zombie(std::string name);
		void	name(std::string name);
		void	announce(void);
};

Zombie*	zombieHorde(int N, std::string name);

#define ZOMBIE_HPP
#endif
