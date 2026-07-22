#include "DiamondTrap.hpp"
#include <iostream>
int main( void ) 
{
	ClapTrap c1("c1");
	ClapTrap c2("c2");
	ClapTrap c3(c1);
	ClapTrap c4;
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
	std::cout << std::endl;

	ScavTrap s1("s1");
	ScavTrap s2("s2");
	ScavTrap s3(s1);
	ScavTrap s4;
	s3 = s2;

	std::cout << std::endl;
	s1.attack("[thing]");
	s1.takeDamage(49);
	for (int i = 0; i < 49; i++)
		s1.beRepaired(1);
	std::cout << std::endl;
	s1.beRepaired(1);
	s1.attack("[thing]");
	s1.takeDamage(1000);
	std::cout << std::endl;
	s1.beRepaired(1);
	s1.attack("[thing]");
	s1.takeDamage(1000);
	std::cout << std::endl;
	s2.beRepaired(1);
	s2.attack("[thing]");
	s2.takeDamage(1000);
	std::cout << std::endl;
	s3.beRepaired(1);
	s3.attack("[thing]");
	s3.takeDamage(1000);
	std::cout << std::endl;
	s1.guardGate();
	s2.guardGate();
	s3.guardGate();
	std::cout << std::endl;

	FragTrap f1("f1");
	FragTrap f2("f2");
	FragTrap f3(f1);
	FragTrap f4;
	f3 = f2;

	std::cout << std::endl;
	f1.attack("[thing]");
	f1.takeDamage(99);
	for (int i = 0; i < 99; i++)
		f1.beRepaired(1);
	std::cout << std::endl;
	f1.beRepaired(1);
	f1.attack("[thing]");
	f1.takeDamage(1000);
	std::cout << std::endl;
	f1.beRepaired(1);
	f1.attack("[thing]");
	f1.takeDamage(1000);
	std::cout << std::endl;
	f2.beRepaired(1);
	f2.attack("[thing]");
	f2.takeDamage(1000);
	std::cout << std::endl;
	f3.beRepaired(1);
	f3.attack("[thing]");
	f3.takeDamage(1000);
	std::cout << std::endl;
	f1.highFivesGuys();
	f2.highFivesGuys();
	f3.highFivesGuys();

	// #define frag_default_HP 100
	// #define scav_default_energy 50
	// #define frag_default_atk 30
	DiamondTrap d1("d1");
	DiamondTrap d2("d2");
	DiamondTrap d3(d1);
	DiamondTrap d4;
	d3 = d2;

	std::cout << std::endl;
	d1.attack("[thing]");
	d1.takeDamage(99);
	for (int i = 0; i < 99; i++)
		d1.beRepaired(1);
	std::cout << std::endl;
	d1.beRepaired(1);
	d1.attack("[thing]");
	d1.takeDamage(1000);
	std::cout << std::endl;
	d1.beRepaired(1);
	d1.attack("[thing]");
	d1.takeDamage(1000);
	std::cout << std::endl;
	d2.beRepaired(1);
	d2.attack("[thing]");
	d2.takeDamage(1000);
	std::cout << std::endl;
	d3.beRepaired(1);
	d3.attack("[thing]");
	d3.takeDamage(1000);
	std::cout << std::endl;
	d1.whoAmI();
	d2.whoAmI();
	d3.whoAmI();
	d4.whoAmI();
}