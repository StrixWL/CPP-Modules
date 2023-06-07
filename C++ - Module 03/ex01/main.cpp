#include "ScavTrap.hpp"

int main() {
	ScavTrap mamak("mamak");
	ScavTrap sahbi;
	sahbi = mamak;
	sahbi.attack("mamak");
	mamak.takeDamage(3);
	mamak.attack("khtek");
	mamak.beRepaired(3);
	mamak.attack("khtek again");
	mamak.guardGate();
	mamak.takeDamage(300);
	mamak.guardGate();
	mamak.attack("khtek again");
}
