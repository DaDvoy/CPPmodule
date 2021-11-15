#include "convert.hpp"

int			foundNan(char *str, std::string type) {
	int		flag = -1;
	
	if (strcmp("-nan", str) == 0 ) {
		std::cout << RED "impossible" STOP << std::endl;
		flag = 0;
	}
	else if (strcmp("nan", str) != 0)
		flag = 1;
	if (flag == -1 && (type == "CHAR" || type == "INT"))
		std::cout << RED "impossible" STOP << std::endl;
	else if (flag == -1)
		std::cout << PINK << ((type == "FLOAT") ? "nanf" : "nan")
				<< STOP << std::endl;
	return (flag == -1 ? 0 : flag);
}

int			foundInf(char *str, std::string type) {
	int		flag = -1;

	if (strcmp("inf", str) != 0 && strcmp("-inf", str) != 0 && strcmp("+inf", str) != 0)
		flag = 1;
	if (flag == -1 && (type == "CHAR" || type == "INT"))
		std::cout << RED "impossible" STOP << std::endl;
	else if (flag == -1 && (type == "FLOAT" || type == "DOUBLE")) {
		if (!strcmp("inf", str))
			std::cout << PINK "inf" STOP << std::endl;
		else if (!strcmp("-inf", str))
			std::cout << PINK "-inf" STOP << std::endl;
		else if (!strcmp("+inf", str))
			std::cout << PINK "+inf" STOP << std::endl;
	}
	return (flag == -1 ? 0 : flag);
}

int			foundDenery(char *str) {
	int		i = 0;
	int		k;

	while (str[i] != '.' && str[i])
		i++;
	for (int j = i + 1; str[j] && isdigit(str[j]); j++)
		k = j - i;
	return (((int)strlen(str) == i || k == 1) ? 1 : k -1);
}
