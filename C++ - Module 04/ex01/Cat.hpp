#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal {
	private:
	public:
		Brain *_brain;
		Cat();
		~Cat();
		Cat(Cat &obj);
		Cat &operator=(Cat &obj);
		void	makeSound(void) const;
};
