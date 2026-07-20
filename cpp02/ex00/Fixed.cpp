#include "Fixed.hpp"
#include <iostream>

const int Fixed::_fracBits = 8;

Fixed::Fixed(void) : _raw(0)
{
	std::cout << "Constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed &param)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_raw = param._raw;
	return ;
}

Fixed &Fixed::operator=(const Fixed &param)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_raw = param._raw;
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_raw);
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_raw = raw;
	return ;
}
