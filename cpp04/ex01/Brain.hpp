#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>

#define idea_count 100

class Brain
{
public:
	std::string _ideas[idea_count];

	Brain(void);
	Brain(const Brain &param);
	Brain &operator=(const Brain &param);
	~Brain(void);
};

#endif