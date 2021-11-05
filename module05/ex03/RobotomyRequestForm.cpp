#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string _name) : Form(_name, 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &robot) : Form(robot) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

static int		getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0); 
	// Равномерно распределяем рандомное число в нашем диапазоне
	return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	Form::execute(executor);
	if (getRandomNumber(1, 2) == 2) {
		std::cout<< GREEN "*some drilling noises*" STOP <<std::endl;
		std::cout << LIGHT_BLUE << this->getName() << STOP
			<< GREEN " has been robotomized successfully 50% of the time" STOP << std::endl;
	}
	else
		std::cout << "It's a failure" << std::endl;
}