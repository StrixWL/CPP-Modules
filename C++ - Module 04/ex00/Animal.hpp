#ifndef ANIMAL_HPP

#include <string>

class Animal {
	protected:
		std::string _type;
	public:
		Animal();
		virtual ~Animal();
		Animal(Animal &obj);
		Animal &operator=(Animal &obj);
		virtual void	makeSound(void) const;
		std::string getType() const;
};


#define ANIMAL_HPP
#endif