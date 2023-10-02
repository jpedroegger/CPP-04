#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog constructor called." << std::endl; 
	type = "Dog";
	brain = new Brain();	
}

Dog::Dog(const Dog &src){
	std::cout << "Dog copy constructor called." << std::endl; 
	*this = src;
	this->brain = new Brain;
}

Dog&	Dog::operator=(const Dog &rhs){
	std::cout << "Dog copy assignment operator called." << std::endl; 
	if (this != &rhs)
	{
		this->type = rhs.type;
		this->brain = new Brain;
		memcpy(this->brain, rhs.brain, sizeof(rhs.brain));
	}
	return *this;
}

Dog::~Dog(){
	std::cout << "Dog destructor called." << std::endl; 
	delete this->brain;
}

std::string	Dog::getType(void) const{
	return type;
}

Brain*	Dog::getBrain(void) const{
	return brain;
}

void	Dog::makeSound(void) const{
	std::cout << "The Animal " << type << " is barking at the moon." << std::endl; 
}
