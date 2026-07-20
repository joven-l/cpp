#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

// default from subject pdf
#define clap_default_HP 10
#define clap_default_energy 10
#define clap_default_atk 0

class ClapTrap
{
private:
	std::string _name;
	unsigned int _HP;
	unsigned int _energy;
	unsigned int _atk;

public:
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &param);
	ClapTrap &operator=(const ClapTrap &param);
	~ClapTrap(void);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif