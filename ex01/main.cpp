#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	/*	const Animal*		dog = new Dog();
	std::cout << std::endl;
	const Animal		dog2;
	std::cout << std::endl;

	//Get Brains Address
	std::cout << "Dog:  " << dog->getBrain() << std::endl;
	
	std::cout << std::endl;
	// Set Ideas
	dog->getBrain()->setIdea("Am I a dog 1?", 1);
	dog->getBrain()->setIdea("what a dog 1", 2);
	// Get Ideas
	std::cout << "Dog:  " << dog->getBrain()->getIdea(1) << std::endl;
	std::cout << "Dog:  " << dog->getBrain()->getIdea(2) << std::endl;
	
	std::cout << std::endl;
	dog2 = *dog;
	std::cout << std::endl;
	//Get Brains Address
	std::cout << "Dog:  " << dog->getBrain() << std::endl;
	
	std::cout << std::endl;

	// Get Ideas
	std::cout << "Dog:  " << dog->getBrain()->getIdea(1) << std::endl;
	std::cout << "Dog:  " << dog->getBrain()->getIdea(2) << std::endl;

	std::cout << std::endl;

	delete dog;*/

	{
	    const Animal* j = new Dog();
		std::cout << std::endl;
	    const Animal* i = new Cat();
		std::cout << std::endl;

	    delete j;//should not create a leak
		std::cout << std::endl;
	    delete i;
		std::cout << std::endl;

	    Dog basic;
	    {
			std::cout << std::endl;
	        Dog tmp = basic;
			std::cout << std::endl;
	    }
		std::cout << std::endl;

	    const Animal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
	    for ( int i = 0; i < 4; i++ ) {
	        delete animals[i];
	    }
	}

    return 0;
}


