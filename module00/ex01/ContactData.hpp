#ifndef CONTACTDATA_H
# define CONTACTDATA_H

#include <iostream>
#include <string>


class ContactData
{
private:
	std::string		first_name;
	std::string		last_name,;
	std::string		nickname;
	std::string		phone_number;
	std::string		darkest_secret;
public:
	ContactData(/* args */);
	~ContactData();
};

#endif