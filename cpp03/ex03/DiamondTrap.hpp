#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

#include <string>

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string _name;
	unsigned int _HP;
	unsigned int _energy;
	unsigned int _atk;

public:
	DiamondTrap(void);
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap &param);
	DiamondTrap &operator=(const DiamondTrap &param);
	~DiamondTrap(void);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void whoAmI();
};

#endif