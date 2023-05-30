#include <iostream>
#include <string>

int main(int ac, char **av) {
	if (ac == !*++av)
		return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *", 0);
	while (char	*p = *av) {
		while (*p++)
			std::cout << (char)std::toupper(*(p - 1)) << (*p || !*++av ? "" : " ");
	}
	return (0);
}
