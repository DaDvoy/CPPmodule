#include "convert.hpp"

// strtod - aнализируется строка argv и игнорируются все спец.символы 
// в начале строки, читаются символы, составляющие число. Процесс чтения останавливается, как только будет достигнут символ
// который не может входить в качестве части в число с плавающей запятой. Таким символом может быть знак пунктуации,
// отличный от точки, буква, отличная от «Е» и «е».

static void		printImpos() {
	std::cout << RED "impossible" STOP << std::endl;
}

void	convChar(char *argv) {
	if (!foundNan(argv, "CHAR") || !foundInf(argv, "CHAR"))
		return ;
	double s = std::strtod(argv, nullptr);
	if (errno == ERANGE || s > SCHAR_MAX || s < SCHAR_MIN || (s == 0 && argv[0] != '0')) {
		printImpos();
		return ;
	}
	char ch = static_cast<char>(s);
	if (ch <= 127 && ch >= 32)
		std::cout << LIGHT_BLUE << ch << STOP << std::endl;
	else
		std::cout << LIGHT_BLUE << "Non displayable" << STOP << std::endl;
}

void	convInt(char *argv) {
	if (!foundNan(argv, "INT") || !foundInf(argv, "INT"))
		return ;
	double s = std::strtod(argv, nullptr);
	if (errno == ERANGE || s > INT_MAX || s < INT_MIN || (argv[0] != '0' && s == 0.0)) {
		printImpos();
		return ;
	}
	int i = static_cast<int>(s);
	std::cout << LIGHT_BLUE << i << STOP << std::endl;
}

void	convFloat(char *argv) {
	if (!foundNan(argv, "FLOAT") || !foundInf(argv, "FLOAT"))
		return ;
	double s = std::strtod(argv, nullptr);
	if (errno == ERANGE || (s == 0.0 && argv[0] != '0')) {
		printImpos();
		return ;
	}
	int denery = foundDenery(argv);
	float f = static_cast<float>(s);
	std::cout << LIGHT_BLUE << std::fixed << std::setprecision(denery)
			<< f << "f" << STOP << std::endl;
}

void	convDouble(char *argv) {
	if (!foundNan(argv, "DOUBLE") || !foundInf(argv, "DOUBLE"))
		return ;
	double s = std::strtod(argv, nullptr);
	if (errno == ERANGE || (s == 0.0 && argv[0] != '0')) {
		printImpos();
		return ;
	}
	int denery = foundDenery(argv);
	std::cout << LIGHT_BLUE << std::fixed << std::setprecision(denery)
			<< s << STOP << std::endl;
}