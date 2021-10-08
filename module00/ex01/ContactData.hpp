#ifndef CONTACTDATA_H
# define CONTACTDATA_H

#include <iostream>
#include <iomanip>
#include <string>


class ContactData
{
private:
	bool			launch;
	std::string		first_name;
	std::string		last_name;
	std::string		nickname;
	std::string		phone_number;
	std::string		darkest_secret;
public:
	ContactData();
	~ContactData();

	std::string		getFirstName(void);
	std::string		getLastName(void);
	std::string		getNickname(void);
	bool			CheckStart(void);
	void			FillContact(void);
	void			PrintContact(int count);
	void			ChangeSize(std::string str);
};

#endif