#include "whatever.hpp"


int main( void ) {
	int a = 2;
	int b = 3;

	std::cout << PINK "Original: " STOP;
	std::cout << GREEN "a = " LIGHT_BLUE << a << GREEN ", b = " LIGHT_BLUE << b << STOP << std::endl;
	std::cout << PINK "Swap:     " STOP;
	
	::swap( a, b );
	std::cout << GREEN "a = " LIGHT_BLUE << a << GREEN ", b = " LIGHT_BLUE << b << STOP << std::endl;
	std::cout << YELLOW "min( a, b ) = " << LIGHT_BLUE << ::min( a, b ) << STOP << std::endl;
	std::cout << YELLOW "max( a, b ) = " LIGHT_BLUE << ::max( a, b ) << STOP << std::endl;
	
	std::cout << GRAY "-------------------------" STOP << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";
	
	std::cout << PINK "Original: " STOP;
	std::cout << GREEN "c = " LIGHT_BLUE << c << GREEN ", d = " LIGHT_BLUE << d << STOP<< std::endl;
	std::cout << PINK "Swap:     " STOP;

	::swap(c, d);
	std::cout << GREEN "c = " LIGHT_BLUE << c << GREEN ", d = " LIGHT_BLUE << d << STOP<< std::endl;
	std::cout << YELLOW "min( c, d ) = " << LIGHT_BLUE << ::min( c, d ) << STOP << std::endl;
	std::cout << YELLOW "max( c, d ) = " LIGHT_BLUE << ::max( c, d ) << STOP << std::endl;

	std::cout << GRAY "-------------------------" STOP << std::endl;

	double e = 1.57;
	double f = 3.42;

	std::cout << PINK "Original: " STOP;
	std::cout << GREEN "e = " LIGHT_BLUE << e << GREEN ", f = " LIGHT_BLUE << f << STOP<< std::endl;
	std::cout << PINK "Swap:     " STOP;

	::swap(e, f);
	std::cout << GREEN "e = " LIGHT_BLUE << e << GREEN ", f = " LIGHT_BLUE << f << STOP<< std::endl;
	std::cout << YELLOW "min( e, f ) = " << LIGHT_BLUE << ::min( e, f ) << STOP << std::endl;
	std::cout << YELLOW "max( e, f ) = " LIGHT_BLUE << ::max( e, f ) << STOP << std::endl;

	return 0;
}