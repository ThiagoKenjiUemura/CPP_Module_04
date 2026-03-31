#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "Animal: Default constructor called." << std::endl;
}

Animal::Animal(const std::string& type) : type(type)
{
	std::cout << "Animal: Parameterized constructor called for " << this->type << "." << std::endl;
}

Animal::Animal(const Animal &other)
{
	std::cout << "Animal: Copy constructor called." << std::endl;
	*this = other;
}

Animal& Animal::operator=(const Animal& other)
{
	std::cout << "Animal: Assignment operator called." << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal: Destructor called." << std::endl;
}

std::string Animal::getType() const
{
	return this->type;
}

void Animal::makeSound() const
{
	std::cout << "Animal: * Generic and indescribable animal sound *" << std::endl;
}