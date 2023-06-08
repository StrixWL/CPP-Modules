#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal {
	private:
		Brain *_brain;
	public:
		Dog();
		~Dog();
		Dog(Dog &obj);
		Dog &operator=(Dog &obj);
		void	makeSound(void) const;
		void	setIdea(std::string idea, int index);
		Brain	*getBrain(void);
};
