#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	/*{
		Animal	*arr[2];
		Cat	*cat	= new Cat();
		Cat	*cat2(cat);

		std::cout << std::endl;
		std::cout << cat2->getType() << std::endl;
		cat2->makeSound();
		std::cout << std::endl;

		for (int i = 0; i < 2; i++)
		{
			if (i < 1)
				arr[i] = new Cat;
			else
				arr[i] = new Dog;
			std::cout << std::endl;
		}
		for (int i = 0; i < 2; i++) {
			delete arr[i];
			std::cout << std::endl;
		}

		delete cat2;
	}*/

	// const Animal*	meta = new Animal();
	// const Cat*		cat = new Cat();
	const Dog*		dog = new Dog();
	const Dog*		dog2;

	dog2 = dog;
	// std::cout << std::endl;
	// std::cout << meta->getType() << std::endl;
	// meta->makeSound();
	// std::cout << std::endl;

	// std::cout << dog->getType() << std::endl;
	std::cout << std::endl;
	dog->getBrain()->setIdea("Am I a dog?", 1);
	std::cout << dog->getBrain()->getIdea(1) << std::endl;
	// dog->makeSound();
	std::cout << std::endl;


	// std::cout << dog2->getType() << std::endl;
	dog2->getBrain()->setIdea("Am I a cat?", 1);
	std::cout << dog->getBrain()->getIdea(1) << std::endl;
	std::cout << dog2->getBrain()->getIdea(1) << std::endl;
	// dog2->makeSound();
	std::cout << std::endl;

	// std::cout << dog->getType() << std::endl;
	// dog->makeSound();
	// std::cout << std::endl;

	// delete meta;
	// delete cat;
	delete dog;
}