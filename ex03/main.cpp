#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int	main(void) {

	/*	{
		Ice			*ice = new Ice();
		Ice			*ice2 = new Ice();
		Cure		*cure = new Cure();
		Cure		*cure2 = new Cure();
		Character	*char1 = new Character("KARL");

		std::cout << std::endl;

		std::cout << ice->getType() << std::endl;
		std::cout << ice << std::endl;
		
		std::cout << std::endl;

		std::cout << ice2->getType() << std::endl;
		std::cout << ice2 << std::endl;
		
		std::cout << std::endl;

		std::cout << cure->getType() << std::endl;
		std::cout << cure << std::endl;
		
		std::cout << std::endl;

		std::cout << cure2->getType() << std::endl;
		std::cout << cure2 << std::endl;
		
		std::cout << std::endl;

		char1->equip(ice);
		char1->equip(ice2);
		char1->equip(cure);
		char1->equip(cure2);


		std::cout << char1->getName() << std::endl;
		std::cout << std::endl;
		for (int i = 0; i < 4; i++)
		{
			std::cout << char1->getInventory(i) << std::endl;
			std::cout << char1->getInventory(i)->getType() << std::endl;
			// std::cout << std::endl;
		}
		std::cout << std::endl;
		char1->unequip(2);
		for (int i = 0; i < 4; i++)
		{
			std::cout << char1->getInventory(i) << std::endl;
			// std::cout << char1->getInventory(i)->getType() << std::endl;
			// std::cout << std::endl;
		}
		// std::cout << char1 << std::endl;
	}*/

	/*{
		Character	*c1 = new Character("Abby");
		Character	*c2 = new Character("Bob");

		Ice			*ice = new Ice("Ice");

		std::cout << c1->getName() << std::endl;
		std::cout << c2->getName() << std::endl;

		std::cout << c1->getInventory(0) << std::endl;
		std::cout << c2->getInventory(0) << std::endl;

		c1->equip(ice);
		// c1->unequip(0);
		c1->use(0, *c2);

		std::cout << c1->getInventory(0)->getType() << std::endl;
	}*/

	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		std::cout << std::endl;
		me->use(0, *bob);
		std::cout << std::endl;
		me->use(1, *bob);
		std::cout << std::endl;
		delete bob;
		delete me;
		delete src;
	}

}