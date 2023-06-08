#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat: public AAnimal {
	private:
		Brain *_brain;
	public:
		Cat();
		~Cat();
		Cat(Cat &obj);
		Cat &operator=(Cat &obj);
		void	makeSound(void) const;
		void	setIdea(std::string idea, int index);
		Brain	*getBrain(void);
};
