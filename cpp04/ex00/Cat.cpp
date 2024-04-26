#include "Cat.hpp"

Cat::Cat ( void ) {
	std::cout << "Default Cat constructor called" << std::endl;
	this->setType("Cat");
}

Cat::Cat ( const Cat &copy ) {
	std::cout << "Copy Cat constructor called" << std::endl;
	this->setType(copy.type);
}

Cat::~Cat( void ) {
	std::cout << "Destructor Cat called" << std::endl;
}

Cat&	Cat::operator=( const Cat& other ) {
	std::cout << "Copy assignment operator Cat called" << std::endl;
	this->setType(other.type);
	return *this;
}

void	Cat::makeSound( void ) const {
	std::cout << "Miaaaaoouuuuuuuuu......" << std::endl;
}
