#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class	AAnimal {

protected:
	std::string	type;

public:
	AAnimal();
	AAnimal(const AAnimal &src);
	AAnimal&	operator=(const AAnimal &rhs);
	virtual	~AAnimal();

	void		makeSound(void) const;
	virtual std::string	getType(void) const = 0;
};

#endif