#include "Bureaucrat.hpp"


int main() {
	try {
		Bureaucrat A("strix", 151);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		Bureaucrat A("strix", 0);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}


	Bureaucrat A("strix", 148);
	try {
		std::cout << --A << std::endl;
		std::cout << --A << std::endl;
		std::cout << --A << std::endl;
		std::cout << --A << std::endl;
		std::cout << --A << std::endl;
		std::cout << --A << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	Bureaucrat B("strix", 3);
	try {
		std::cout << ++B << std::endl;
		std::cout << ++B << std::endl;
		std::cout << ++B << std::endl;
		std::cout << ++B << std::endl;
		std::cout << ++B << std::endl;
		std::cout << ++B << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}
