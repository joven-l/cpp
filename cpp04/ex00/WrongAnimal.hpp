#ifndef WrongAnimal_HPP
# define WrongAnimal_HPP

#include <string>

class WrongAnimal
{
protected:
	std::string type;

public:
	WrongAnimal(void);
	WrongAnimal(const WrongAnimal &param);
	WrongAnimal &operator=(const WrongAnimal &param);
	virtual ~WrongAnimal(void);

	void makeSound(void) const;
	std::string getType(void) const;
};

#endif