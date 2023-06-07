#include "ClapTrap.hpp"


ClapTrap::ClapTrap() {
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj) {
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = obj;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &obj) {
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	_name = obj._name;
	_hitPoints = obj._hitPoints;
	_energyPoints = obj._energyPoints;
	_attackDamage = obj._attackDamage;
	return *this;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap constructor called" << std::endl;
}

bool ClapTrap::canDoSomething(void) {
	if (_energyPoints && _hitPoints > 0)
		return true;
	std::cout << "ClapTrap " << _name << " cannot attack because they have no " << (_energyPoints ? "" : "energy left!") << (_hitPoints > 0 ? "" : "health left!") << std::endl;
	return false;
}

void ClapTrap::attack(const std::string &target) {
	if (canDoSomething()) {
		_energyPoints--;
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (canDoSomething()) {
		_hitPoints -= amount;
		std::cout << "ClapTrap " << _name << " got attacked and took " << amount << " points of damage!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (canDoSomething()) {
		_hitPoints += amount;
		_energyPoints--;
		std::cout << "ClapTrap " << _name << " repaired itself and got " << amount << " hit points back!" << std::endl;
	}
}
