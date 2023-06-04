#include "Fixed.hpp"

Fixed::Fixed(void): _fractionalBits(0), _fixedPoint(0) {
	std::cout << "Default Constructor called" << std::endl;
	(void)_fractionalBits;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj): _fractionalBits(0) {
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed &Fixed::operator=(const Fixed &obj) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixedPoint = obj.getRawBits();
	return *this;
}

int		Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return _fixedPoint;
}

void	Fixed::setRawBits(const int raw) {
	std::cout << "setRawBits member function called" << std::endl;
	_fixedPoint = raw;
}
