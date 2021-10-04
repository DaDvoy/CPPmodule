#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
	count = 0;
}

PhoneBook::~PhoneBook(){
}

// void	PhoneBook::Beginning()
// {
// 	count = 0;
// }

void	PhoneBook::AddContact()
{
	if (count == 8)
		count = 0;
	contact[count].FillContact();
	count++;
}

void	PhoneBook::SearchContact()
{
	// check at empty book
	if (count == 0)
	{
		std::cout << "There are no contacts in the phone book" << std::endl;
		return ;
	}
	std::cout << "     index|first name| last name|  nickname" << std::endl;
	std::cout << "---------- ---------- ---------- ----------" << std::endl;
	contact[count].PrintContact(count, contact[count].getFirstName());
}