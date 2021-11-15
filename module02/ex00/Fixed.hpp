#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

// static означает, что значение является общим для
// всех экземпляров класса, а const означает,
// что оно не изменяется.

class Fixed
{
private:
	int					_forFixed;
	static const int	_fractBit;
public:
	Fixed();
	Fixed(const Fixed &fixed);
	~Fixed();

	Fixed& operator= (const Fixed &_fix);
	int				getRawBits(void) const;
	void			setRawBits( int const raw);
};

#endif
