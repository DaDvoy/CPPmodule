#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

# define RED		"\x1b[31m"
# define GREEN		"\x1b[32m"
# define LIGHT_BLUE	"\x1b[34m"
# define GRAY		"\x1b[90m"
# define YELLOW		"\x1b[33m"
# define PINK		"\x1b[35m"
# define STOP		"\x1b[0m"


template <class T>
class Array
{
private:
	unsigned int	_sizeArr;
	T				*_array;
public:
	Array() {
		_sizeArr = 0;
		_array = NULL;
	}
	Array(unsigned int _intArray) {
		_sizeArr = _intArray;
		_array = new T[_sizeArr];
	}
	Array(const Array &copy) {
		this->operator=(copy);
	}
	~Array() {
		if (_array)
			delete[] this->_array;
	}

	Array &operator=(const Array &copy) {
		if (this == &copy)
			return (*this);
		this->_sizeArr = copy.getSize();
		this->_array = new T[_sizeArr];
		for (unsigned int i = 0; i < _sizeArr; i++)
			_array[i] = copy._array[i];
		return (*this);
	}

	T &operator[](unsigned int n) {
		if (n < 0 || n >= this->_sizeArr)
			throw limit();
		return (_array[n]);
	}

	unsigned int	getSize() const {return (this->_sizeArr);}

	class limit : public std::exception
	{
	public:
		const char * what() const throw() {return (RED "This element is out of the limits" STOP);}
	};
};

#endif
