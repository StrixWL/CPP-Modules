#include "ClapTrap.hpp"

int main() {
	ClapTrap mamak("mamak");
	ClapTrap sahbi;
	mamak.attack("khtek");
	mamak.takeDamage(3);
	mamak.beRepaired(3);
	sahbi = mamak;
	mamak.attack("khtek again");
	sahbi.attack("khtek again");
}
