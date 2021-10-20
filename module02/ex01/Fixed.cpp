#include "Fixed.hpp"

const int	Fixed::_fractBit = 8;

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	setRawBits(0);
}

Fixed::Fixed(const int _intFixed) {
    std::cout << "Int constructor called" << std::endl;
	setRawBits(roundf(_intFixed * (1 << _fractBit)));
}

Fixed::Fixed(const float _floatFixed) {
    std::cout << "Float constructor called" << std::endl;
	setRawBits(_floatFixed * (1 << _fractBit));
}

Fixed::Fixed( const Fixed &fixed ) {
	std::cout << "Copy constructor called" << std::endl;
	this->operator= (fixed);
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

// Перегрузка операторов

Fixed& Fixed::operator=(const Fixed &_fix) {
	std::cout << "Assignation operator called" << std::endl;
	this->_forFixed = _fix.getRawBits();
	return (*this);
}

std::ostream& operator<< (std::ostream &out, const Fixed &fixed) {
	out << fixed.toFloat();
	return (out);
}

// Гетеро и сетеро

int		Fixed::getRawBits() const {
	// std::cout << "getRawBits member function called" << std::endl;
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
