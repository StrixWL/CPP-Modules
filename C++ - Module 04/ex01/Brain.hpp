#ifndef BRAIN_HPP

#include <string>
#include <iostream>

class Brain {
	private:
		std::string _ideas[100];
	public:
		Brain(); // constructor
		~Brain(); // destructor
		Brain(Brain &obj); // copy constructor
		Brain &operator=(Brain &obj); // copy assignment operator
		std::string	*getIdeas();
};


#define BRAIN_HPP
#endif