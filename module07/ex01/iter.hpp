#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

# define RED		"\x1b[31m"
# define GREEN		"\x1b[32m"
# define LIGHT_BLUE	"\x1b[34m"
# define GRAY		"\x1b[90m"
# define YELLOW		"\x1b[33m"
# define PINK		"\x1b[35m"
# define STOP		"\x1b[0m"

template <typename T>
void print(T &arr)
{
	std::cout << LIGHT_BLUE << arr << STOP;
}

template <typename T>
void iter(T *array, int lenght, void (*f)(T const &t))
{
	for (int i = 0; i < lenght; i++)
		f(array[i]);
}


#endif