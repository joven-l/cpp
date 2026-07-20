#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void) : _raw(0)
{
	std::cout << "constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed &param)
{
	std::cout << "copy constructor called" << std::endl;
	this->_raw = param.getRawBits();
	return ;
}

Fixed &Fixed::operator=(const Fixed &param)
{
	std::cout << "copy assignment operator called" << std::endl;
	this->_raw = param.getRawBits();
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "destructor called" << std::endl;
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
