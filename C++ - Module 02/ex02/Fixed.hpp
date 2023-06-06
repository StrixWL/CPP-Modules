#ifndef FIXED_HPP

#include <iostream>

class Fixed {
	private:
		const int	_fractionalBits;
		int			_fixedPoint;
	public:
		Fixed(void); // default constructor
		~Fixed(); // destructor
		Fixed(const Fixed &obj); // copy constructor
		Fixed &operator=(const Fixed &obj); // copy assignment operator
		bool operator>(const Fixed &obj) const;
		bool operator<(const Fixed &obj) const;
		bool operator<=(const Fixed &obj) const;
		bool operator>=(const Fixed &obj) const;
		bool operator==(const Fixed &obj) const;
		bool operator!=(const Fixed &obj) const;
		Fixed operator+(const Fixed &obj) const;
		Fixed operator-(const Fixed &obj) const;
		Fixed operator*(const Fixed &obj) const;
		Fixed operator/(const Fixed &obj) const;
		Fixed operator++(void);
		Fixed operator--(void);
		Fixed operator++(int);
		Fixed operator--(int);
		static const Fixed &max(const Fixed &a, const Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		Fixed(const int number);
		Fixed(const float number);
		int		getRawBits(void) const;
		void	setRawBits(const int raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream &operator<<(std::ostream &o, const Fixed &obj);
int	pow2(int n);

#define FIXED_HPP
#endif
