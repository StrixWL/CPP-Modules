#ifndef CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
	private:
		std::string _name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
		bool		canDoSomething(void);
	public:
		ClapTrap(); // constructor
		~ClapTrap(); // destructor
		ClapTrap(const ClapTrap &obj); // copy constructor
		ClapTrap &operator=(const ClapTrap &obj); // copy assignment operator
		ClapTrap(std::string name);
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#define CLAPTRAP_HPP
#endif
