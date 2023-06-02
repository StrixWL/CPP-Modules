#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>


int main(int ac, char **av) {
	if (ac != 4)
		return (std::cout << std::string(av[5]) << std::endl, 1);
	std::string file = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];

	std::ifstream	iFileStream(file);
	std::ofstream	oFileStream(file + ".replace");
	std::string		nextLine;
	while (std::getline(iFileStream, nextLine, '\0')) {
		for (size_t j = -2, i = 0;; i += (j - i) + s1.size()) {
			j = nextLine.find(s1, i);
			oFileStream << nextLine.substr(i, j - i);
			if (j == std::string::npos)
				break ;
			oFileStream << s2;
		}
		oFileStream << std::endl;
	}
}
