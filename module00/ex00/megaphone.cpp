#include <iostream> //директива препроцесора

int		main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; argv[i]; i++)
		{
			for (int j = 0; argv[i][j]; j++)
			{
				if (argv[i][j] < 97 || argv[i][j] > 122)
					std::cout << argv[i][j];
				else
					std::cout << (char)(argv[i][j] - 32);
			}
		}
		std::cout << std::endl;
	}
	return (0);
}