#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int					_forFixed;
	static const int	_fractBit;
public:
	Fixed();
	Fixed(const int _intFixed);
	Fixed(const float _floatFixed);
	Fixed(const Fixed &fixed);
	~Fixed();

	Fixed& operator= (const Fixed &_fix);

    bool operator > (const Fixed &operatorFix) const;
	bool operator < (const Fixed &operatorFix) const;
	bool operator >= (const Fixed &operatorFix) const;
	bool operator <= (const Fixed &operatorFix) const;
	bool operator == (const Fixed &operatorFix) const;
	bool operator != (const Fixed &operatorFix) const;

	Fixed operator + (const Fixed &operatorFix);
	Fixed operator - (const Fixed &operatorFix);
	Fixed operator * (const Fixed &operatorFix);
	Fixed operator / (const Fixed &operatorFix);

	Fixed &operator ++();
	Fixed operator ++(int);
	Fixed &operator --();
	Fixed operator --(int);

	int					getRawBits(void) const;
	void				setRawBits( int const raw);
	float				toFloat( void ) const;
	int					toInt( void ) const;
	static Fixed		&min(Fixed &fix1, Fixed &fix2);
	static Fixed		&max(Fixed &fix1, Fixed &fix2);
	static const Fixed	&min(const Fixed &fix1, const Fixed &fix2);
	static const Fixed	&max(const Fixed &fix1, const Fixed &fix2);

};

std::ostream& operator<< (std::ostream &out, const Fixed &fixed);

#endif
