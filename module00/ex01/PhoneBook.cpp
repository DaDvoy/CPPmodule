#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void){
}
PhoneBook::~PhoneBook(void){
}

void	PhoneBook::Beginning()
{
	count = 0;
}

void	PhoneBook::AddContact()
{
	if (count == 8)
		count = 0;
	contact[count].fill_contact();
	count++;
}

void	PhoneBook::SearchContact()
{

}