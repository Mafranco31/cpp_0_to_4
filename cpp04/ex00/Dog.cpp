#include "Dog.hpp"

Dog::Dog ( void ) {
	std::cout << "Default Dog constructor called" << std::endl;
	this->setType("Dog");
}

Dog::Dog ( const Dog &copy ) {
	std::cout << "Copy Dog constructor called" << std::endl;
	this->setType(copy.type);
}

Dog::~Dog( void ) {
	std::cout << "Destructor Dog called" << std::endl;
}

Dog&	Dog::operator=( const Dog& other ) {
	std::cout << "Copy assignment operator Dog called" << std::endl;
	this->setType(other.type);
	return *this;
}

void	Dog::makeSound( void ) const {
	std::cout << "Ouaf Ouaf Ouaf !!"<< std::endl;
}
