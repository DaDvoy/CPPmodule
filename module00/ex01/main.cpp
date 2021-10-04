#include "PhoneBook.hpp"

int		main(void)
{
	std::string		command;
	PhoneBook		PhoneBook;

	std::cout << "\x1b[36;1mHi, to choose one of options: ADD, SEARCH or EXIT\x1b[0m" << std::endl;
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
			PhoneBook.SearchContact();
			// std::cout << "search";
			//smt::comand;
		else if (command == "EXIT")
			break ;
			// std::cout << "exit";
			//smt::comand;
	}
	std::cout << "\x1b[34;1mClosing PhooneBook, goodbye ;)\x1b[0m" << std::endl;
	return (0);
}