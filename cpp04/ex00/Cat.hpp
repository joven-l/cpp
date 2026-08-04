#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

#include <string>

class Cat : public Animal
{
public:
	Cat(void);
	Cat(const Cat &param);
	Cat &operator=(const Cat &param);
	~Cat(void);
	
	void makeSound(void) const;
	std::string getType(void) const;
};

#endif