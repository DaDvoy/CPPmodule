#include "Brain.hpp"

Brain::Brain() {
	int	r_i;
	std::cout << GREEN "Congratulation! Now you have the brain." STOP << std::endl;
	for (int i = 0; i < 100; i++)
	{
		if ((r_i = getRandomNumber(1, 2)) == 1)
			_ideas[i] = " is lying on the crib";
		else
			_ideas[i] = " asks to eat";
	}
}

Brain::Brain(Brain &brain) {
	std::cout << PINK " the copycat in deal!" STOP << std::endl;
	this->operator=(brain);
}

Brain::~Brain() {
	std::cout << RED " say goodbye yourself brain..." STOP << std::endl;
}

Brain &Brain::operator=(const Brain &_brain) {
	for (int i = 0; i < 100; i++) {
		this->_ideas[i] = _brain._ideas[i];
	}
	return (*this);
}

int		Brain::getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0); 
	// Равномерно распределяем рандомное число в нашем диапазоне
	return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}
