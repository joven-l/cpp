#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

#include <string>

// default from subject pdf
#define frag_default_HP 100
#define frag_default_energy 100
#define frag_default_atk 30

class FragTrap : public ClapTrap
{
private:
	std::string _name;
	unsigned int _HP;
	unsigned int _energy;
	unsigned int _atk;

public:
	FragTrap(std::string name);
	FragTrap(const FragTrap &param);
	FragTrap &operator=(const FragTrap &param);
	~FragTrap(void);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void highFivesGuys(void);
};

#endif