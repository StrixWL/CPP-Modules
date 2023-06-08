#include "AAnimal.hpp"

class Cat: public AAnimal {
	public:
		Cat();
		~Cat();
		Cat(Cat &obj);
		Cat &operator=(Cat &obj);
		void	makeSound(void) const;
};
