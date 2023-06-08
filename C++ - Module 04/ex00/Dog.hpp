#include "AAnimal.hpp"

class Dog: public AAnimal {
	public:
		Dog();
		~Dog();
		Dog(Dog &obj);
		Dog &operator=(Dog &obj);
		void	makeSound(void) const;
};
