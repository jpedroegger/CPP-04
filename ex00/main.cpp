#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	const Animal*	meta = new Animal();
	const Cat*		cat = new Cat();
	const Dog*		dog = new Dog();


	std::cout << std::endl;
	std::cout << meta->getType() << std::endl;
	meta->makeSound();
	std::cout << std::endl;

	std::cout << cat->getType() << std::endl;
	cat->makeSound();
	std::cout << std::endl;

	std::cout << dog->getType() << std::endl;
	dog->makeSound();
	std::cout << std::endl;

	delete meta;
	delete cat;
	delete dog;

}