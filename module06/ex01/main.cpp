#include "Serialization.hpp"

uintptr_t	serialize(Data* ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*		deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data *>(raw));
}

int			main() {
	Data *one = new Data();
	Data *two;

	one->_name = "Something";

	std::cout << PINK "Struct address: " GREEN << one << STOP << std::endl;
	std::cout << PINK "Struct name: " GREEN << one->_name << STOP << std::endl;
	std::cout << GRAY "----------------------" STOP << std::endl;

	uintptr_t ptr = serialize(one);
	std::cout << YELLOW "Serialization: " LIGHT_BLUE << ptr << STOP << std::endl;
	std::cout << GRAY "----------------------" STOP << std::endl;

	two = deserialize(ptr);
	std::cout << YELLOW "Deserialization :)" STOP << std::endl;
	std::cout << GRAY "----------------------" STOP << std::endl;

	std::cout << PINK "Struct address: " << GREEN << two << STOP << std::endl;
	std::cout << PINK "Struct name: " << GREEN << two->_name << STOP << std::endl;
}