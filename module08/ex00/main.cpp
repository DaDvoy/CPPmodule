#include "easyfind.hpp"

int		main() {
	
	std::vector<int> myVector;
    for (int count=0; count < 5; ++count)
        myVector.push_back(count);

	try
	{
		std::cout << GREEN "The first occurence " << YELLOW "3" GREEN << " of myVector: " LIGHT_BLUE
				<< *easyfind(myVector, 3) << STOP << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	std::list<int> myList;
    for (int count=0; count < 15; ++count)
        myList.push_back(count);

	try
	{
		std::cout << GREEN "The first occurence " << YELLOW "9" GREEN << " of myList: " LIGHT_BLUE
				<< *easyfind(myList, 9) << STOP  << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::list<int> badList;
    for (int count=0; count < 15; ++count)
        badList.push_back(count);

	try
	{
		std::cout << GREEN "The first occurence " << YELLOW "17" GREEN << " of myList: " LIGHT_BLUE
				<< *easyfind(badList, 17) << STOP  << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

    std::cout << '\n';
}