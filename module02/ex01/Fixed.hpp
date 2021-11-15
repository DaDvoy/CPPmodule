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
	int				getRawBits(void) const;
	void			setRawBits( int const raw);
	float			toFloat( void ) const;
	int				toInt( void ) const;
};

std::ostream& operator<< (std::ostream &out, const Fixed &fixed);

#endif
