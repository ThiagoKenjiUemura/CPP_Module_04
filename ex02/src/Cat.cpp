#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Cat: Default constructor called." << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << "Cat: Copy constructor called." << std::endl;
	this->brain = new Brain(*other.brain);
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Cat: Assignment operator called." << std::endl;
	if (this != &other)
	{
		this->type = other.type;
		*this->brain = *other.brain;
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat: Destructor called." << std::endl;
	delete this->brain;
}

void Cat::makeSound() const
{
	std::cout << "Cat: Meow! Meow!" << std::endl;
}

Brain* Cat::getBrain() const
{
    return this->brain;
}
