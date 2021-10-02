#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <string>
#include "ContactData.hpp"

class PhoneBook
{
private:
	ContactData		contact[8];
	int				count;
public:
	PhoneBook(void);
	~PhoneBook(void);

	void			Beginning(void);
	void			AddContact(void);
	void			SearchContact(void);
};

#endif