#include "ClapTrap.hpp"
#include <iostream>
int main( void ) 
{
	ClapTrap a("a");
	ClapTrap b("b");
	ClapTrap c(a);
	c = b;

	std::cout << std::endl;
	a.attack("[thing]");
	a.takeDamage(9);
	for (int i = 0; i < 9; i++)
		a.beRepaired(1);
	std::cout << std::endl;
	a.beRepaired(1);
	a.attack("[thing]");
	a.takeDamage(1000);
	std::cout << std::endl;
	a.beRepaired(1);
	a.attack("[thing]");
	a.takeDamage(1000);
}