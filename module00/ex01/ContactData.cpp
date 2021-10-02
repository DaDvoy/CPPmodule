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

void		ContactData::fill_contact(void)
{
	int			i;
	std::string	smt[5];

	i = 0;
	std::cout << "Enter some information about the contact" << std::endl;
	std::cout << "1) What's name: " << std::endl;
	std::cout << "2) What's surname: " << std::endl;
	std::cout << "3) What's nickname: " << std::endl;
	std::cout << "4) What's phone number: " << std::endl;
	std::cout << "5) Some darkest secret: " << std::endl;
	do 
	{
		if (!getline(std::cin, smt[i]))
			return ;
		i++;
	} while (i <= 5);
	std::cout << "contact added successfully" << std::endl;
	// if (!getline(std::cin, smt))
	// 	return ;
	// first_name = smt;
	// if (!getline(std::cin, smt))
	// 	return ;
	// last_name = smt;
	// if (!getline(std::cin, smt))
	// 	return ;
	// nickname = smt;
	// if (!getline(std::cin, smt))
	// 	return ;
	// phone_number = smt;
	// if (!getline(std::cin, smt))
	// 	return ;
	// darkest_secret = smt;
}
