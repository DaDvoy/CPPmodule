#include "Span.hpp"

Span::Span(unsigned int N) : _N(N), _vect() {}

Span::~Span() {}

void Span::addNumber(int number) {
	if (_vect.size() >= _N)
		throw AlreadyExist();
	_vect.push_back(number);
}

unsigned int Span::shortestSpan() {
	if (_vect.size() < 2)
		throw NoSpan();
	int _short = std::abs(_vect[1] - _vect[0]);
	for (unsigned int i = 0; i < _N; i++) {
		for (unsigned int j = i + 1; j < _N; j++) {
			if (std::abs(_vect[j] - _vect[i]) < _short)
				_short = std::abs(_vect[j] - _vect[i]);
		}
	}
	return (_short);
}

unsigned int Span::longestSpan() {
	if (_vect.size() < 2)
		throw NoSpan();
	std::vector<int>::const_iterator _min, _max;
	_min = std::min_element(_vect.begin(), _vect.end());
	_max = std::max_element(_vect.begin(), _vect.end());
	return (*_max - *_min);
}


const char * Span::AlreadyExist::what() const throw() {
	return (RED "ooppps, has not field" STOP);
}

const char * Span::NoSpan::what() const throw() {
	return (RED "no Span" STOP);
}