#include <string>
#include <iostream>
#include <fstream>

void	errorControl(std::string error) {
	std::cout << "Error: " << error << std::endl;
}

int		main(int argc, char **argv) {
	if (argc == 4)
	{
		std::string				filename(argv[1]), s1(argv[2]), s2(argv[3]);
		std::string::size_type	pos = 0;
		std::string				str;
		
		std::ifstream	_read(filename);
		std::ofstream 	_write(filename += ".replace");
		if (!_read.is_open() || !_write.is_open())  {
			errorControl("The file doesn't open");
			return (1);
		}
		while (!_read.eof())
		{
			getline(_read, str);
			pos = str.find(s1);
			if (pos == std::string::npos)
				_write << str;
			else
			{
				while (pos != std::string::npos) {
				str.erase(pos, s1.length());
				str.insert(pos, s2);
				pos = str.find(s1);
				}
				_write << str << std::endl;
			}
		}
		_read.close();
		_write.close();
		return (0);
	}
	else
		errorControl("Wrong arguments!");
	return (1);
}