#ifndef WrongCat_HPP
# define WrongCat_HPP

#include "WrongAnimal.hpp"

#include <string>

class WrongCat : public WrongAnimal
{
public:
	WrongCat(void);
	WrongCat(const WrongCat &param);
	WrongCat &operator=(const WrongCat &param);
	~WrongCat(void);
	
	void makeSound(void) const;
	std::string getType(void) const;
};

#endif