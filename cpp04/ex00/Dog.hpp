#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

#include <string>

class Dog : public Animal
{
public:
	Dog(void);
	Dog(const Dog &param);
	Dog &operator=(const Dog &param);
	~Dog(void);
	
	void makeSound(void) const;
	std::string getType(void) const;
};

#endif