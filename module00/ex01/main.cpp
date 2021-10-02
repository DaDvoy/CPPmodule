#include "PhoneBook.hpp"

int		main(void)
{
	std::string		command;
	PhoneBook		PhoneBook;

	std::cout << "Hi, to choose one of options: ADD, SEARCH or EXIT" << std::endl;
	while (1)
	{
		std::cin >> command;
		// std::getline (std::cin, command);
		if (std::cin.eof())
			return (0);
		std::cin.ignore(command.max_size(), '\n');
		if (command == "ADD")
			PhoneBook.AddContact();
			// std::cout << "add";
			//smt::comand;
		else if (command == "SEARCH")
			std::cout << "search";
			//smt::comand;
		else if (command == "EXIT")
			std::cout << "exit";
			//smt::comand;
	}
	return (0);
}