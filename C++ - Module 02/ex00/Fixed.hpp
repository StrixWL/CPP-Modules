#ifndef FIXED_HPP

#include <iostream>

class Fixed {
	private:
		const int	_fractionalBits;
	public:
		int			_fixedPoint;
		Fixed(void); // constructor
		~Fixed(void); // destructor
		Fixed(const Fixed &obj); // copy constructor
		Fixed &operator=(const Fixed &obj); // copy assignment operator
		int		getRawBits(void) const;
		void	setRawBits(const int raw); 
};

#define FIXED_HPP
#endif
