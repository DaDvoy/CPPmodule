#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

# define RED		"\x1b[31m"
# define GREEN		"\x1b[32m"
# define LIGHT_BLUE	"\x1b[34m"
# define GRAY		"\x1b[90m"
# define YELLOW		"\x1b[33m"
# define PINK		"\x1b[35m"
# define STOP		"\x1b[0m"

template <typename T2>
void swap(T2 &a, T2 &b)
{
	T2 c = a;
	a = b;
	b = c;
}

template <typename T>
T max(T a, T b)
{
	return (a > b) ? a : b;
}

template <typename T1>
T1 min(T1 a, T1 b)
{
	return (a < b) ? a : b;
}

#endif