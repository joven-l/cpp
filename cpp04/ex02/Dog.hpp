#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

#include <string>

class Dog : public Animal
{
private:
	Brain *_brain;

public:
	Dog(void);
	Dog(const Dog &param);
	Dog &operator=(const Dog &param);
	~Dog(void);
	
	void makeSound(void) const;
	std::string getType(void) const;

	void setIdea(int idx, std::string idea);
	std::string getIdea(int idx) const;
};

#endif