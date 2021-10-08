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
	bool			rewriting;
public:
	PhoneBook();
	~PhoneBook();

	void			Menu(void);
	int				CheckEmpty(void);
	int				CheckValid();
	void			PrintBook(void);
	void			AddContact(void);
	void			SearchContact(void);
};

#endif