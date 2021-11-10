#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <string>
#include <iostream>
#include <cstdlib>
#include <iomanip>

# define RED		"\x1b[31m"
# define GREEN		"\x1b[32m"
# define LIGHT_BLUE	"\x1b[34m"
# define GRAY		"\x1b[90m"
# define YELLOW		"\x1b[33m"
# define PINK		"\x1b[35m"
# define STOP		"\x1b[0m"

void		convChar(char *argv);
void		convInt(char *argv);
void		convFloat(char *argv);
void		convDouble(char *argv);

int			foundNan(char *str, std::string type);
int			foundInf(char *str, std::string type);
int			foundDenery(char *str);


#endif