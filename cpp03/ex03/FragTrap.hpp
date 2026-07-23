#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

#include <string>

// default from subject pdf
#define frag_default_HP 100
#define frag_default_energy 100
#define frag_default_atk 30

class FragTrap : virtual public ClapTrap
{
public:
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(const FragTrap &param);
	FragTrap &operator=(const FragTrap &param);
	~FragTrap(void);

	void highFivesGuys(void);
};

#endif