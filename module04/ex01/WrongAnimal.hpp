#ifndef WrongANIMAL_HPP
# define WrongANIMAL_HPP

#include <iostream>

# define RED		"\x1b[31m"
# define GREEN		"\x1b[32m"
# define LIGHT_BLUE	"\x1b[34m"
# define GRAY		"\x1b[90m"
# define YELLOW		"\x1b[33m"
# define PINK		"\x1b[35m"
# define STOP		"\x1b[0m"

class WrongAnimal
{
protected:
	std::string		type;
public:
	WrongAnimal();
	WrongAnimal(WrongAnimal &Wronganimal);
	~WrongAnimal();

	void	makeSound() const;
	std::string		getType() const;

	WrongAnimal &operator=(WrongAnimal &_copyWrongAnimal);
};

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(WrongCat &Wrongcat);
	~WrongCat();

	void	makeSound() const;
};

class WrongDog : public WrongAnimal
{
public:
	WrongDog();
	WrongDog(WrongDog &Wrongdog);
	~WrongDog();

	void	makeSound() const;
};

#endif
