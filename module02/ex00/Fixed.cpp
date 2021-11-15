#include "Fixed.hpp"

const int	Fixed::_fractBit = 8;

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	_forFixed = 0;
}

Fixed::Fixed( const Fixed &fixed ) {
	std::cout << "Copy constructor called" << std::endl;
	this->operator= (fixed);
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &_fix) {
	std::cout << "Assignation operator called" << std::endl;
	this->_forFixed = _fix.getRawBits();
	return (*this);
}

int		Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_forFixed);
}

void	Fixed::setRawBits( int const raw ) {
	this->_forFixed = raw;
}