#ifndef SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
	public:
		ScavTrap(); // constructor
		~ScavTrap(); // destructor
		ScavTrap(const ScavTrap &obj); // copy constructor
		ScavTrap &operator=(const ScavTrap &obj); // copy assignment operator
		ScavTrap(std::string name);
		void	guardGate(void);
		void	attack(const std::string &target);
};

#define SCAVTRAP_HPP
#endif
