#include "ClapTrap.hpp"
#include <iostream>
int main( void ) 
{
	ClapTrap c1("c1");
	ClapTrap c2("c2");
	ClapTrap c3(c1);
	c3 = c1;

	std::cout << std::endl;
	c1.attack("[thing]");
	c1.takeDamage(9);
	for (int i = 0; i < 9; i++)
		c1.beRepaired(1);
	std::cout << std::endl;
	c1.beRepaired(1);
	c1.attack("[thing]");
	c1.takeDamage(1000);
	std::cout << std::endl;
	c1.beRepaired(1);
	c1.attack("[thing]");
	c1.takeDamage(1000);
	std::cout << std::endl;
	c2.beRepaired(1);
	c2.attack("[thing]");
	c2.takeDamage(1000);
	std::cout << std::endl;
	c3.beRepaired(1);
	c3.attack("[thing]");
	c3.takeDamage(1000);
}