#ifndef AAnimal_HPP

#include <string>

class AAnimal {
	protected:
		std::string _type;
	public:
		AAnimal();
		virtual ~AAnimal();
		AAnimal(AAnimal &obj);
		AAnimal &operator=(AAnimal &obj);
		virtual void	makeSound(void) const = 0;
		std::string getType() const;
};


#define AAnimal_HPP
#endif