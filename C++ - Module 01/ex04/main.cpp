#include <iostream>
#include <fstream>
#include <string>

void	replaceLine(std::ofstream &oFileStream, std::ifstream &iFileStream, std::string s1, std::string s2) {
	std::string		nextLine;
	while (std::getline(iFileStream, nextLine)) {
		for (size_t j, i = 0;; i += (j - i) + s1.size()) {
			j = nextLine.find(s1, i);
			oFileStream << nextLine.substr(i, j - i);
			if (j == std::string::npos)
				break ;
			oFileStream << s2;
		}
		oFileStream << std::endl;
	}
}

int main(int ac, char **av) {
	if (ac != 4)
		return (std::cout << "Wrong args!" << std::endl, 1);
	std::string file = av[1];
	std::string s1 = av[2];
	if (!s1.size())
		return (std::cout << "2nd arg may not be empty." << std::endl, 1);
	std::string s2 = av[3];

	std::ifstream	iFileStream(file);
	if (!iFileStream.good())
		return (std::cout << "Can't read from file." << std::endl, 1);
	std::ofstream	oFileStream(file + ".replace");
	if (!oFileStream.good())
		return (std::cout << "Can't write to file." << std::endl, 1);

	replaceLine(oFileStream, iFileStream, s1, s2);
}
