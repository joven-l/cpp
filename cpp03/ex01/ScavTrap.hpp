#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

#include <string>

// default from subject pdf
#define scav_default_HP 100
#define scav_default_energy 50
#define scav_default_atk 20

class ScavTrap : public ClapTrap
{
private:
	std::string _name;
	unsigned int _HP;
	unsigned int _energy;
	unsigned int _atk;

public:
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &param);
	ScavTrap &operator=(const ScavTrap &param);
	~ScavTrap(void);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void guardGate();
};

#endif