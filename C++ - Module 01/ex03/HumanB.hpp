#ifndef HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
	private:
		Weapon		*_weapon;
		std::string  _name;
	public:
		HumanB(std::string name);
		void	attack(void);
		void	setWeapon(Weapon &weapon);
};

#define HUMANB_HPP
#endif
