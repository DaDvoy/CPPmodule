#include "Fixed.hpp"

const int	Fixed::_fractBit = 8;

Fixed::Fixed() {
	setRawBits(0);
}

Fixed::Fixed(const int _intFixed) {
	setRawBits(_intFixed * (1 << _fractBit));
}

Fixed::Fixed(const float _floatFixed) {
	setRawBits(roundf(_floatFixed * (1 << _fractBit)));
}

Fixed::Fixed( const Fixed &fixed ) {
	this->operator= (fixed);
}

Fixed::~Fixed() {
}

// Перегрузка операторов

Fixed& Fixed::operator=(const Fixed &_fix) {
	this->_forFixed = _fix.getRawBits();
	return (*this);
}

std::ostream& operator<< (std::ostream &out, const Fixed &fixed) {
	out << fixed.toFloat();
	return (out);
}

// Гетеро и сетеро

int		Fixed::getRawBits() const {
	return (this->_forFixed);
}

void	Fixed::setRawBits( int const raw ) {
	this->_forFixed = raw;
}

// Преобразование значений

float	Fixed::toFloat( void ) const {
	return ((float)getRawBits() / (float)(1 << _fractBit));
}

int		Fixed::toInt(void) const {
	return (getRawBits() / (1 << _fractBit));
}

// Операторы сравнения

bool Fixed::operator> (const Fixed &operatorFix) const {
	return (this->getRawBits() > operatorFix.getRawBits());
}

bool Fixed::operator< (const Fixed &operatorFix) const {
	return (this->getRawBits() < operatorFix.getRawBits());
}

bool Fixed::operator>= (const Fixed &operatorFix) const {
	return (this->getRawBits() >= operatorFix.getRawBits());
}

bool Fixed::operator<= (const Fixed &operatorFix) const {
	return (this->getRawBits() <= operatorFix.getRawBits());
}

bool Fixed::operator== (const Fixed &operatorFix) const {
	return (this->getRawBits() == operatorFix.getRawBits());
}

bool Fixed::operator!= (const Fixed &operatorFix) const {
	return (this->getRawBits() != operatorFix.getRawBits());
}

// Арифметические операторы

Fixed Fixed::operator + (const Fixed &operatorFix) {
	return(this->toFloat() + operatorFix.toFloat());
}

Fixed Fixed::operator - (const Fixed &operatorFix) {
	return(this->toFloat() - operatorFix.toFloat());
}

Fixed Fixed::operator * (const Fixed &operatorFix) {
	return(this->toFloat() * operatorFix.toFloat());
}

Fixed Fixed::operator / (const Fixed &operatorFix) {
	return(this->toFloat() / operatorFix.toFloat());
}

// Пре/пост-инкремент и пре/пост-декремент

Fixed &Fixed::operator++ () {
	++this->_forFixed;
	return (*this);
}

Fixed Fixed::operator++ (int) {
	Fixed	tmp(*this);
	++(this->_forFixed);
	return (tmp);
}

Fixed &Fixed::operator-- () {
	--this->_forFixed;
	return (*this);
}

Fixed Fixed::operator-- (int) {
	Fixed	tmp(*this);
	--(this->_forFixed);
	return (tmp);
}

// min и max

Fixed &Fixed::min(Fixed &fix1, Fixed &fix2) {
	if (fix1 < fix2)
		return (fix1);
	return (fix2);
}

Fixed &Fixed::max(Fixed &fix1, Fixed &fix2) {
	if (fix1 > fix2)
		return (fix1);
	return (fix2);
}

const Fixed	&Fixed::min(const Fixed &fix1, const Fixed &fix2) {
	if (fix1 < fix2)
		return (fix1);
	return (fix2);
}

const Fixed	&Fixed::max(const Fixed &fix1, const Fixed &fix2) {
	if (fix1 > fix2)
		return (fix1);
	return (fix2);
}
