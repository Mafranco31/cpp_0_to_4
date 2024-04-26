#include "WrongCat.hpp"

WrongCat::WrongCat ( void ) {
	std::cout << "Default WrongCat constructor called" << std::endl;
	this->setType("WrongCat");
}

WrongCat::WrongCat ( const WrongCat &copy ) {
	std::cout << "Copy WrongCat constructor called" << std::endl;
	this->setType(copy.type);
}

WrongCat::~WrongCat( void ) {
	std::cout << "Destructor WrongCat called" << std::endl;
}

WrongCat&	WrongCat::operator=( const WrongCat& other ) {
	std::cout << "Copy assignment operator WrongCat called" << std::endl;
	this->setType(other.type);
	return *this;
}

void	WrongCat::makeSound( void ) const {
	std::cout << "** BURP **" << std::endl;
}
