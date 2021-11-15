#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <list>

# define RED		"\x1b[31m"
# define GREEN		"\x1b[32m"
# define LIGHT_BLUE	"\x1b[34m"
# define GRAY		"\x1b[90m"
# define YELLOW		"\x1b[33m"
# define PINK		"\x1b[35m"
# define STOP		"\x1b[0m"


template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack(void) : std::stack<T>(){};
	MutantStack(const MutantStack &cont) : std::stack<T>(cont){};
	~MutantStack(){};

	MutantStack &operator=(const MutantStack &other){return std::stack<T>::operator=(other);};
	
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverseIterator;

	iterator begin(){return this->c.begin();};

	iterator end(){return this->c.end();};

	reverseIterator rbegin(){return this->c.rbegin();};

	reverseIterator rend(){return this->c.rend();};
};

#endif