#ifndef HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
	private:
		Weapon		&_weapon;
		std::string  _name;
	public:
		HumanA(std::string name, Weapon &weapon);
		void	attack(void);
};

#define HUMANA_HPP
#endif
