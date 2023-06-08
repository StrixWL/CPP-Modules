#ifndef WrongAnimal_HPP

#include <string>

class WrongAnimal {
	protected:
		std::string _type;
	public:
		WrongAnimal();
		~WrongAnimal();
		WrongAnimal(WrongAnimal &obj);
		WrongAnimal &operator=(WrongAnimal &obj);
		void	makeSound(void) const;
		std::string getType() const;
};


#define WrongAnimal_HPP
#endif