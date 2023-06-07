#ifndef FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap {
	public:
		FragTrap(); // constructor
		~FragTrap(); // destructor
		FragTrap(const FragTrap &obj); // copy constructor
		FragTrap &operator=(const FragTrap &obj); // copy assignment operator
		FragTrap(std::string name);
		void	highFivesGuys(void);
		void	attack(const std::string &target);
};

#define FRAGTRAP_HPP
#endif
