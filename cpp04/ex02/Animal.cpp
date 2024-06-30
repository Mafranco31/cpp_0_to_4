#include "Animal.hpp"

Animal::Animal( void ) : type("") {
    std::cout << "Default Animal constructor called" << std::endl;
}

Animal::Animal( const Animal &copy ) {
    std::cout << "Copy Animal constructor called" << std::endl;
    this->type = copy.type;
}

Animal::~Animal( void ) {
    std::cout << "Destructor Animal called" << std::endl;
}

Animal& Animal::operator=( const Animal& other) {
	std::cout << "Copy assignment operator Animal called" << std::endl;
	this->type = other.type;
	return *this;
}

std::string	Animal::getType( void ) const {
	return this->type;
}

void	Animal::makeSound( void ) const { return ; }

void	Animal::setType( std::string type ) {
	this->type = type;
}
