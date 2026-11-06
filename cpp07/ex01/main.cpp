#include "iter.hpp"
#include <iostream>

void toupper(char &c)
{
	if (c >= 'a' && c <= 'z')
		c += 'A' - 'a';
}

void putchar(const char &c)
{
	std::cout << c;
}

int main( void )
{
	{
		void (*f)(char &) = toupper;

		char arr[] = "abcdef";
		iter(arr, 6, f);
		std::cout << arr << '\n';
	}
	{
		void (*f)(const char &) = putchar;

		const char arr[] = "abcdef";
		iter(arr, 6, f);
		std::cout << '\n';
	}
	return 0;
}