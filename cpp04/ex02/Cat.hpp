#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

#include <string>

class Cat : public Animal
{
private:
	Brain *_brain;

public:
	Cat(void);
	Cat(const Cat &param);
	Cat &operator=(const Cat &param);
	~Cat(void);
	
	void makeSound(void) const;
	std::string getType(void) const;

	void setIdea(int idx, std::string idea);
	std::string getIdea(int idx) const;
};

#endif