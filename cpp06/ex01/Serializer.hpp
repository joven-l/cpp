#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <string>
#include <stdint.h>
#include <iostream>

struct Data
{
	std::string name;
};

class Serializer
{
private:
	Serializer(void);
	Serializer(const Serializer &param);
	Serializer &operator=(const Serializer &param);
	~Serializer(void);
public:
	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);

};

#endif