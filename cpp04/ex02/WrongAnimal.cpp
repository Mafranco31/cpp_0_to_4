#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : type("") {
    std::cout << "Default WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal &copy ) {
    std::cout << "Copy WrongAnimal constructor called" << std::endl;
    this->type = copy.type;
}

WrongAnimal::~WrongAnimal( void ) {
    std::cout << "Destructor WrongAnimal called" << std::endl;
    return ;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& other) {
	std::cout << "Copy assignment operator WrongAnimal called" << std::endl;
	this->type = other.type;
	return *this;
}

std::string	WrongAnimal::getType( void ) const {
	return this->type;
}

void	WrongAnimal::makeSound( void ) const { return ; }

void	WrongAnimal::setType( std::string type ) {
	this->type = type;
}
