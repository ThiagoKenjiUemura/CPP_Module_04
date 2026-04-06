#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Dog: Default constructor called." << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
	*this = other;
	std::cout << "Dog: Copy constructor called." << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Dog: Assignment operator called." << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog: Destructor called." << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Dog: Woof! Bark!" << std::endl;
}