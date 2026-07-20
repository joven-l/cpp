#include "Fixed.hpp"
#include <iostream>
int main( void ) 
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << std::endl << "Subject pdf tests end" << std::endl;
	std::cout << std::endl << "Custom tests start" << std::endl;

	Fixed a
	return 0;
}