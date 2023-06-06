#include "Fixed.hpp"

#include <cmath>

int	pow2(int n) {
	int res = 2;
	while (--n > 0)
		res *= 2;
	return res;
}

Fixed::Fixed(void): _fractionalBits(8), _fixedPoint(0) {
	(void)_fractionalBits;
}

Fixed::~Fixed(void) {
}

Fixed::Fixed(const Fixed &obj): _fractionalBits(8) {
	*this = obj;
}

Fixed &Fixed::operator=(const Fixed &obj) {
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
	_fixedPoint = number * pow2(_fractionalBits);
}

Fixed::Fixed(const float number): _fractionalBits(8) {
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

bool Fixed::operator>(const Fixed &obj) const {
	return this->getRawBits() > obj.getRawBits();
}

bool Fixed::operator<(const Fixed &obj) const {
	return this->getRawBits() < obj.getRawBits();
}

bool Fixed::operator<=(const Fixed &obj) const {
	return this->getRawBits() <= obj.getRawBits();
}

bool Fixed::operator>=(const Fixed &obj) const {
	return this->getRawBits() >= obj.getRawBits();
}

bool Fixed::operator==(const Fixed &obj) const {
	return this->getRawBits() == obj.getRawBits();
}

bool Fixed::operator!=(const Fixed &obj) const {
	return this->getRawBits() != obj.getRawBits();
}

Fixed Fixed::operator+(const Fixed &obj) const {
	return Fixed(this->toFloat() + obj.toFloat());
}

Fixed Fixed::operator-(const Fixed &obj) const {
	return Fixed(this->toFloat() - obj.toFloat());
}

Fixed Fixed::operator*(const Fixed &obj) const {
	return Fixed(this->toFloat() * obj.toFloat());
}

Fixed Fixed::operator/(const Fixed &obj) const {
	return Fixed(this->toFloat() / obj.toFloat());
}

Fixed Fixed::operator++(void) {
	_fixedPoint++;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed temp(*this);
	_fixedPoint++;
	return temp;
}

Fixed Fixed::operator--(void) {
	_fixedPoint--;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed temp(*this);
	_fixedPoint--;
	return temp;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
	return a > b ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
	return a > b ? b : a;
}
