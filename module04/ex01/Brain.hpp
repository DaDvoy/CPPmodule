#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

# define RED		"\x1b[31m"
# define GREEN		"\x1b[32m"
# define LIGHT_BLUE	"\x1b[34m"
# define GRAY		"\x1b[90m"
# define YELLOW		"\x1b[33m"
# define PINK		"\x1b[35m"
# define STOP		"\x1b[0m"

class Brain
{
private:
	std::string		_ideas[100];
public:
	Brain();
	Brain(Brain &brain);
	~Brain();

	Brain			&operator=(const Brain &_brain);
	int				getRandomNumber(int min, int max);
};

#endif

// Deep copy:
//  Это означает, что любые изменения,
//	внесенные в копию объекта, не отражаются
//	в исходном объекте.