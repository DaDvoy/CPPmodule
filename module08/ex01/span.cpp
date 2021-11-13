#include "span.hpp"

span::span(unsigned int N) : _N(N), _vect() {}

span::~span() {}

void span::addNumber(int number) {
	if (_vect.size() >= _N)
		throw AlreadyExist();
	_vect.push_back(number);
}

unsigned int span::shortSpan() {
	
}


const char * span::AlreadyExist::what() const throw() {
	return (RED "the number already exist" STOP);
}