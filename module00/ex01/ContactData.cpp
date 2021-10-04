#include "ContactData.hpp"

ContactData::ContactData(void)
{
	this->first_name = "";
	this->last_name = "";
	this->nickname = "";
	this->phone_number = "";
	this->darkest_secret = "";
}

ContactData::~ContactData(void){
}

std::string	ContactData::getFirstName(void)
{
	return (first_name);
}

std::string	ContactData::getLastName(void)
{
	return (last_name);
}

std::string	ContactData::getNickname(void)
{
	return (nickname);
}

void		ContactData::FillContact(void)
{
	std::string	smt;

	std::cout << "\x1b[35;1mEnter some information about the contact\x1b[0m" << std::endl;
	std::cin.ignore(32767, '\n');
	std::cout << "\x1b[37;1m1) What's name: " << std::endl;
	if (!getline(std::cin, first_name))
		return ;	
	std::cout << "2) What's surname: " << std::endl;
	if (!getline(std::cin, last_name))
		return ;
	std::cout << "3) What's nickname: " << std::endl;
	if (!getline(std::cin, nickname))
		return ;
	std::cout << "4) What's phone number: " << std::endl;
	if (!getline(std::cin, phone_number))
		return ;
	std::cout << "5) Some darkest secret: \x1b[0m" << std::endl;
	if (!getline(std::cin, darkest_secret))
		return ;
	std::cout << "\x1b[32;1mContact added successfully\x1b[0m" << std::endl;
}

void		ContactData::ChangeSize(std::string str)
{
	int		i;

	i = -1;
	while (++i < 9)
		std::cout << str[i];
	std::cout << ".";
}

void		ContactData::PrintContact(int count, std::string str)
{
	std::cout << std::setw(10) << count << "|";
	if (str.size() > 10)
		ChangeSize(str);
	else
		std::cout << std::setw(10) << str;
	std::cout << "|";
	// std::cout << std::setw(10) << this->first_name;
	// std::cout << "|";
	std::cout << std::endl;
}
