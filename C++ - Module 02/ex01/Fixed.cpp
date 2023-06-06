#include "Fixed.hpp"

#include <cmath>

int	pow2(int n) {
	int res = 2;
	while (--n > 0)
		res *= 2;
	return res;
}

Fixed::Fixed(void): _fractionalBits(8), _fixedPoint(0) {
	std::cout << "Default Constructor called" << std::endl;
	(void)_fractionalBits;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj): _fractionalBits(8) {
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed &Fixed::operator=(const Fixed &obj) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixedPoint = obj.getRawBits();
	return *this;
}

int		Fixed::getRawBits(void) const {
	return _fixedPoint;
}

void	Fixed::setRawBits(const int raw) {
	_fixedPoint = raw;
}

Fixed::Fixed(const int number): _fractionalBits(8) {
	std::cout << "Int constructor called" << std::endl;
	_fixedPoint = number * pow2(_fractionalBits);
}

Fixed::Fixed(const float number): _fractionalBits(8) {
	std::cout << "Float constructor called" << std::endl;
	_fixedPoint = roundf(number * pow2(_fractionalBits));
}

float	Fixed::toFloat(void) const {
	return (float)_fixedPoint / pow2(_fractionalBits);
}

int	Fixed::toInt(void) const {
	return _fixedPoint >> _fractionalBits;
}

std::ostream &operator<<(std::ostream &o, const Fixed &obj) {
	o << obj.toFloat();
	return o;
}
