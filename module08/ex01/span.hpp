#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

# define RED		"\x1b[31m"
# define GREEN		"\x1b[32m"
# define LIGHT_BLUE	"\x1b[34m"
# define GRAY		"\x1b[90m"
# define YELLOW		"\x1b[33m"
# define PINK		"\x1b[35m"
# define STOP		"\x1b[0m"

class span
{
private:
	unsigned int		_N;
	std::vector<int>	_vect;
public:
	span(unsigned int N);
	~span();

	void			addNumber(int number);
	unsigned int	shortSpan();
	unsigned int	longestSpan();

	class AlreadyExist : public std::exception
	{
	public:
		const char * what() const throw();
	};

};

#endif
