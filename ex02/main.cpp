#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
int	main( void ) {
	{
		const Animal*	SPA[5];
		
		for (int i = 0; i < 5; i++)
		{
			if (i % 2)
				SPA[i] = new Dog();
			else
				SPA[i] = new Cat();
			std::cout << "SPA is full !" << std::endl;
		}
		for (int i = 0; i < 5; i++)
		{
			std::cout << "====MY SOUND=======" <<std::endl;
			SPA[i]->makeSound();
			SPA[i]->printIdeas();
			std::cout << "====================" <<std::endl;

		}
		for (int i = 0; i < 5; i++)
			delete SPA[i];
		std::cout << "SPA was raided by PETA, doing usual PETA idiocies ..." << std::endl;
	}

	// {
	// 	std::cout << "//==========\\\\" << std::endl;
	// 	std::cout << "---Deep copy test---" << std::endl;
	// 	std::cout << "//==========\\\\" << std::endl;

	// 	Dog	cloneDog;
	// 	Cat	cloneCat;

	// 	const Dog	Dogmeat;
	// 	cloneDog = Dogmeat;
	// 	const Cat	Nibbles;
	// 	cloneCat = Nibbles;

	// 	cloneDog.printIdeas();
	// 	cloneCat.printIdeas();
	// }
	return 0;
}