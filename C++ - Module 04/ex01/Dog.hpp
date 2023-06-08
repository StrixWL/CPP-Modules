#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal {
	private:
	public:
		Brain *_brain;
		Dog();
		~Dog();
		Dog(Dog &obj);
		Dog &operator=(Dog &obj);
		void	makeSound(void) const;
};
