#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
	count = 0;
	rewriting = false;
}

PhoneBook::~PhoneBook(){
}

void	PhoneBook::AddContact()
{
	if (count == 8)
	{
		count = 0;
		rewriting = true;
	}
	contact[count].FillContact();
	count++;
}

int		PhoneBook::CheckEmpty()
{
	int	i;

	i = 0;
	if (contact[i].CheckStart() == false)
	{
		std::cout << "\x1b[33;1mThere are no contacts in the phone book\x1b[0m" << std::endl;
		return (-1);
	}
	return (0);
}

void	PhoneBook::PrintBook(void)
{
	int	i = 0;

	std::cout << "     index|first name| last name|  nickname" << std::endl;
	std::cout << "---------- ---------- ---------- ----------" << std::endl;
	while (i < count)
	{
		contact[i].PrintContact(i);
		i++;
	}
	std::cout << "---------- ---------- ---------- ----------" << std::endl;
}

int		PhoneBook::CheckValid()
{
	int	i;
	int	res;
	std::string str;

	std::cin >> str;
	res = str[0] - 48;
	i = count + 1;
	if (std::cin.eof())
		return (-1);
	while (str.size() != 1 || (res < 1 || res > 8) || (rewriting == false && res >= i))// || str.size() != 1)
	{
		if (res == 0)
			return (-1);
		std::cout << "No such contact, try again or enter 0 to exit: ";
		std::cin >> str;
		res = str[0] - 48;
		if (std::cin.eof())
			return (-1);
	}
	return (res);
}



void	PhoneBook::SearchContact()
{
	std::string	tmp;
	int	res;
	int i;

	if ((res = CheckEmpty()) == -1)
		return ;
	PrintBook();
	std::cout << "\x1b[35;1mEnter 0 to exit\x1b[0m" << std::endl;
	std::cout << "\x1b[35;1mFor checking some contacts to choose number: \x1b[0m";
	if ((res = CheckValid()) == -1)
		return ;
	i = res - 1;
	std::cout << "\x1b[33;1m     index|first name| last name|  nickname" << std::endl;
	std::cout << "---------- ---------- ---------- ----------\x1b[0m" << std::endl;
	contact[i].PrintContact(i);
	std::cout << "\x1b[33;1m---------- ---------- ---------- ----------\x1b[0m" << std::endl;
}

void	PhoneBook::Menu()
{
	std::string		command;

	std::cout << "\x1b[34;1mHi, welcome to Phone book!\x1b[0m" << std::endl;
	while (1)
	{
		std::cout << "\x1b[36;1mTo choose one of options: ADD, SEARCH or EXIT\x1b[0m" << std::endl;
		std::cin >> command;
		if (std::cin.eof())
			return ;
		else if (command == "ADD")
			AddContact();
		else if (command == "SEARCH")
			SearchContact();
		else if (command == "EXIT")
			break ;
	}
	std::cout << "\x1b[34;1mClosing PhooneBook, goodbye ;)\x1b[0m" << std::endl;
	return ;
}