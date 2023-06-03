#include "Harl.hpp"

int main(int ac, char **av) {
	if (ac != 2)
		return (std::cout << "invalid args" << std::endl, 0);
	Harl mamak;
	std::string level = av[1];
	std::string levels = "DEBUGINFOWARNINGERROR";
	switch (levels.find(level))
	{
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			mamak.complain("debug");
		case 5:
			std::cout << "[ INFO ]" << std::endl;
			mamak.complain("info");
		case 9:
			std::cout << "[ WARNING ]" << std::endl;
			mamak.complain("warning");
		case 16:
			std::cout << "[ ERROR ]" << std::endl;
			mamak.complain("error");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}
