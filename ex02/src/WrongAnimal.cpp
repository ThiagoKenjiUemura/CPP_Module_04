#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout << "WrongAnimal: Default constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	std::cout << "WrongAnimal: Copy constructor called." << std::endl;
	*this = other;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	std::cout << "WrongAnimal: Assignment operator called." << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal: Destructor called." << std::endl;
}

std::string WrongAnimal::getType() const
{
	return this->type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal: * Weird and wrong generic sound *" << std::endl;
}