#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	const Dog*		dog = new Dog();
	std::cout << std::endl;
	const Dog*		dog2 = new Dog(*dog);
	std::cout << std::endl;
	const Dog		dog3(*dog);
	std::cout << std::endl;
	Dog		dog4;
	std::cout << std::endl;

	//Get Brains Address
	std::cout << "Dog:  " << dog->getBrain() << std::endl;
	std::cout << "Dog2: " << dog2->getBrain() << std::endl;
	std::cout << "Dog3: " << dog3.getBrain() << std::endl;
	std::cout << "Dog4: " << dog4.getBrain() << std::endl;
	
	std::cout << std::endl;
	// Set Ideas
	dog->getBrain()->setIdea("Am I a dog 1?", 1);
	dog->getBrain()->setIdea("what a dog 1", 2);
	dog2->getBrain()->setIdea("Am I a dog 2?", 1);
	dog3.getBrain()->setIdea("Am I a dog 3?", 1);
	dog4.getBrain()->setIdea("Am I a dog 4?", 1);
	// Get Ideas
	std::cout << "Dog:  " << dog->getBrain()->getIdea(1) << std::endl;
	std::cout << "Dog:  " << dog->getBrain()->getIdea(2) << std::endl;
	std::cout << "Dog2: " << dog2->getBrain()->getIdea(1) << std::endl;
	std::cout << "Dog3: " << dog3.getBrain()->getIdea(1) << std::endl;
	std::cout << "Dog4: " << dog4.getBrain()->getIdea(1) << std::endl;
	
	std::cout << std::endl;
	dog4 = *dog;
	std::cout << std::endl;
	//Get Brains Address
	std::cout << "Dog:  " << dog->getBrain() << std::endl;
	std::cout << "Dog2: " << dog2->getBrain() << std::endl;
	std::cout << "Dog3: " << dog3.getBrain() << std::endl;
	std::cout << "Dog4: " << dog4.getBrain() << std::endl;
	
	std::cout << std::endl;

	// Get Ideas
	std::cout << "Dog:  " << dog->getBrain()->getIdea(1) << std::endl;
	std::cout << "Dog:  " << dog->getBrain()->getIdea(2) << std::endl;
	std::cout << "Dog2: " << dog2->getBrain()->getIdea(1) << std::endl;
	std::cout << "Dog3: " << dog3.getBrain()->getIdea(1) << std::endl;
	std::cout << "Dog4: " << dog4.getBrain()->getIdea(1) << std::endl;

	std::cout << std::endl;

	delete dog;
	delete dog2;
}

