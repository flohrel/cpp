#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main( void )
{
	Animal	*zoo[20];
	Brain	*brain;

	for (int i = 0; i < 10; i++)
	{
		if (i % 2)
			zoo[i] = new Cat();
		else
			zoo[i] = new Dog();
	}
	std::cout << "animal[0]: " << zoo[0]->getType() << std::endl;
	std::cout << "animal[1]: " << zoo[1]->getType() << std::endl;
	brain = zoo[0]->getBrain();
	brain->ideas[0] = "todelete";
	brain->ideas[1] = "todelete2";
	std::cout << "animal[0]->_brain->ideas[0]: " << brain->ideas[0] << std::endl;
	std::cout << "animal[0]->_brain->ideas[1]: " << brain->ideas[1] << std::endl;
	brain = zoo[1]->getBrain();
	brain->ideas[0] = "test";
	brain->ideas[1] = "test2";
	std::cout << "animal[1]->_brain->ideas[0]: " << brain->ideas[0] << std::endl;
	std::cout << "animal[1]->_brain->ideas[1]: " << brain->ideas[1] << std::endl;
	std::cout << "animal[0] = animal[1]" << std::endl;
	*zoo[0] = *zoo[1];
	brain = zoo[0]->getBrain();
	std::cout << "animal[0]: " << zoo[0]->getType() << std::endl;
	std::cout << "animal[0]->_brain->ideas[0]: " << brain->ideas[0] << std::endl;
	std::cout << "animal[0]->_brain->ideas[1]: " << brain->ideas[1] << std::endl;
	brain = zoo[1]->getBrain();
	std::cout << "animal[1]: " << zoo[1]->getType() << std::endl;
	std::cout << "animal[1]->_brain->ideas[0]: " << brain->ideas[0] << std::endl;
	std::cout << "animal[1]->_brain->ideas[1]: " << brain->ideas[1] << std::endl;
	for (int i = 0; i < 10; i++)
	{
		delete zoo[i];
	}
}