#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>

# define RED		"\x1b[31m"
# define GREEN		"\x1b[32m"
# define LIGHT_BLUE	"\x1b[34m"
# define GRAY		"\x1b[90m"
# define YELLOW		"\x1b[33m"
# define PINK		"\x1b[35m"
# define STOP		"\x1b[0m"

class Base
{
public:
	virtual ~Base();
};

class A : public Base
{
public:
	~A();
};

class B : public Base
{
public:
	~B();
};

class C : public Base
{
public:
	~C();
};

Base *	generate(void);
void	identify(Base* p);
void	identify(Base& p);

#endif