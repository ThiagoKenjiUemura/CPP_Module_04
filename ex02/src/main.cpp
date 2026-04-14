#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
	std::cout << "1. THE FORBIDDEN ANIMAL TEST (ABSTRACT CLASS)" << std::endl;
	std::cout << "If you see this, it means you didn't uncomment the forbidden line," << std::endl;
	std::cout << "or your compiler is broken! (Keep it commented to proceed).\n" << std::endl;
	std::cout << "2. NORMAL POLYMORPHISM TEST (DOGS AND CATS)" << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << "\n--- Sounds ---" << std::endl;
	j->makeSound();
	i->makeSound();
	std::cout << "\n--- Destructors (Memory Check) ---" << std::endl;
	delete j;
	delete i;
	return 0;
}