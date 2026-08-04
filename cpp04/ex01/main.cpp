#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
	{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete (meta);
	delete (j);
	delete (i);
	std::cout << std::endl;
	}
	{
		const Animal* arr[100];

		for (int i = 0; i < 100; i++)
		{
			if (i < 50)
				arr[i] = new Dog();
			else
				arr[i] = new Cat();
		}
		std::cout << std::endl;
		for (int i = 0; i < 100; i++)
		{
			delete (arr[i]);
		}
		std::cout << std::endl;
	}
	{
		Dog a;

		a.setIdea(0, "I'm Dog a!");
		Dog b(a);
		Dog c(a);
	
		std::cout << std::endl;
		std::cout << a.getIdea(0) << std::endl;
		std::cout << b.getIdea(0) << std::endl;
		std::cout << c.getIdea(0) << std::endl;
		std::cout << std::endl;
		b.setIdea(0, "I'm Dog b!");
		c.setIdea(0, "I'm Dog c!");
		std::cout << a.getIdea(0) << std::endl;
		std::cout << b.getIdea(0) << std::endl;
		std::cout << c.getIdea(0) << std::endl;
		std::cout << std::endl;
	}
	{
		Cat a;

		a.setIdea(0, "I'm Cat a!");
		Cat b(a);
		Cat c(a);
	
		std::cout << std::endl;
		std::cout << a.getIdea(0) << std::endl;
		std::cout << b.getIdea(0) << std::endl;
		std::cout << c.getIdea(0) << std::endl;
		std::cout << std::endl;
		b.setIdea(0, "I'm Cat b!");
		c.setIdea(0, "I'm Cat c!");
		std::cout << a.getIdea(0) << std::endl;
		std::cout << b.getIdea(0) << std::endl;
		std::cout << c.getIdea(0) << std::endl;
		std::cout << std::endl;
	}
	return 0;
}