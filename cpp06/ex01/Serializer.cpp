#include "Serializer.hpp"

Serializer::Serializer(void)
{
	std::cout << "Serializer Default Constructor called" << std::endl;
	return ;
}

Serializer::Serializer(const Serializer &param)
{
	(void) param;
	std::cout << "Serializer Copy Constructor called" << std::endl;
	return ;
}

Serializer &Serializer::operator=(const Serializer &param)
{
	(void) param;
	std::cout << "Serializer Copy assignment operator called called" << std::endl;
	return (*this);
}

Serializer::~Serializer(void)
{
	std::cout << "Serializer Destructor called" << std::endl;
	return ;
}

uintptr_t Serializer::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}