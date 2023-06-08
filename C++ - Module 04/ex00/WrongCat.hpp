#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {
	public:
		WrongCat();
		~WrongCat();
		WrongCat(WrongCat &obj);
		WrongCat &operator=(WrongCat &obj);
		void	makeSound(void) const;
};
