#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal {
	private:
		Brain *_brain;
	public:
		Cat();
		~Cat();
		Cat(Cat &obj);
		Cat &operator=(Cat &obj);
		void	makeSound(void) const;
};
