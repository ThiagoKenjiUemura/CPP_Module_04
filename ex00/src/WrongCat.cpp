#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "WrongCat: Default constructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
	std::cout << "WrongCat: Copy constructor called." << std::endl;
	*this = other;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	std::cout << "WrongCat: Assignment operator called." << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat: Destructor called." << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat: Meow? (This should not print if called from a base pointer!)" << std::endl;
}