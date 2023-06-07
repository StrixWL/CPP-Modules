#include "FragTrap.hpp"

int main() {
	FragTrap mamak("mamak");
	FragTrap sahbi;
	sahbi = mamak;
	sahbi.attack("mamak");
	mamak.takeDamage(3);
	mamak.attack("khtek");
	mamak.beRepaired(3);
	mamak.attack("khtek again");
	mamak.highFivesGuys();
	mamak.takeDamage(300);
	mamak.highFivesGuys();
	mamak.highFivesGuys();
	mamak.attack("khtek again");
}
