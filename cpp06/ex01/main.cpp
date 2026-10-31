#include "Serializer.hpp"

int main(void)
{
	Data data;
	std::cout << "Enter name: ";
	std::cin >> data.name;

	std::cout << "data name: "<< data.name << std::endl;
	std::cout << "data address: "<< &data << std::endl;
	uintptr_t temp = Serializer::serialize(&data);
	std::cout << std::hex << "serialized address: 0x" << temp << std::endl;
	Data *temp2 = Serializer::deserialize(temp);
	std::cout << "deserialized name: "<< temp2->name << std::endl;
	std::cout << "deserialized address: "<< temp2 << std::endl;
	return (0);
}