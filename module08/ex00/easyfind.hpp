#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <list>


# define RED		"\x1b[31m"
# define GREEN		"\x1b[32m"
# define LIGHT_BLUE	"\x1b[34m"
# define GRAY		"\x1b[90m"
# define YELLOW		"\x1b[33m"
# define PINK		"\x1b[35m"
# define STOP		"\x1b[0m"

class NotFound : public std::exception
{
public:
	const char * what() const throw() {return (RED "the occurrence not found" STOP);}
};


template <typename T>
typename T::iterator easyfind(T &t, int n)
{
	typename T::iterator it;
	it = std::find(t.begin(), t.end(), n);
	if (it == t.end())
		throw NotFound();
	return (it);
}

#endif