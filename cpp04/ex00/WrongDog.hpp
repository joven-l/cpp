#ifndef WrongDog_HPP
# define WrongDog_HPP

#include "WrongAnimal.hpp"

#include <string>

class WrongDog : public WrongAnimal
{
public:
	WrongDog(void);
	WrongDog(const WrongDog &param);
	WrongDog &operator=(const WrongDog &param);
	~WrongDog(void);
	
	void makeSound(void) const;
	std::string getType(void) const;
};

#endif