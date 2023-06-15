#ifndef HARL_HPP

#include <string>
#include <iostream>

class Harl {
	private:
		void (Harl::*pointer)(void);
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	public:
		void complain(std::string level);
};

#define HARL_HPP
#endif
