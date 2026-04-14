#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
	std::cout << "1. SUBJECT MANDATORY TEST (ARRAY OF ANIMALS)" << std::endl;

	const int arraySize = 4;
	Animal* animals[arraySize];

	std::cout << "--- Creating Animals ---" << std::endl;
	for (int i = 0; i < arraySize; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	std::cout << "\n--- Destroying Animals ---" << std::endl;

	for (int i = 0; i < arraySize; i++)
	{
		delete animals[i];
	}

	std::cout << "\n2. DEEP COPY TEST (THE MOST IMPORTANT PART)" << std::endl;

	std::cout << "--- Creating Dog A ---" << std::endl;
	Dog dogA;
	dogA.getBrain()->setIdea(0, "I want to eat a bone.");
	dogA.getBrain()->setIdea(1, "I should bark at the mailman.");

	std::cout << "\n--- Creating Dog B (Copy of Dog A) ---" << std::endl;
	Dog dogB(dogA); // Chama o construtor de cópia!

	std::cout << "\n--- Comparing Ideas Before Modification ---" << std::endl;
	std::cout << "Dog A Idea 0: " << dogA.getBrain()->getIdea(0) << std::endl;
	std::cout << "Dog B Idea 0: " << dogB.getBrain()->getIdea(0) << std::endl;

	std::cout << "\n--- Modifying Dog A's Brain ---" << std::endl;
	dogA.getBrain()->setIdea(0, "I want to sleep all day.");
	
	std::cout << "\n--- Comparing Ideas After Modification ---" << std::endl;
	std::cout << "Dog A Idea 0: " << dogA.getBrain()->getIdea(0) << " (Changed!)" << std::endl;
	std::cout << "Dog B Idea 0: " << dogB.getBrain()->getIdea(0) << " (Should be the original!)" << std::endl;

	std::cout << "\n--- End of Program (Destructors will run now) ---\n" << std::endl;

	return 0;
}
