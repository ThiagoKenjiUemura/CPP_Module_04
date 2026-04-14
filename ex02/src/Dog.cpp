#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Dog: Default constructor called." << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
	std::cout << "Dog: Copy constructor called." << std::endl;
	this->brain = new Brain(*other.brain);
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Dog: Assignment operator called." << std::endl;
	if (this != &other)
	{
		this->type = other.type;
		*this->brain = *other.brain;
	}
	return *this;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog: Destructor called." << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Dog: Woof! Bark!" << std::endl;
}

Brain* Dog::getBrain() const
{
	return this->brain;
}