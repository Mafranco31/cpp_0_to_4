#include "Cat.hpp"

Cat::Cat ( void ) {
	std::cout << "Default Cat constructor called" << std::endl;
	this->brain = new Brain();
	this->setType("Cat");
}

Cat::Cat ( const Cat &copy ) {
	std::cout << "Copy Cat constructor called" << std::endl;
	this->brain = copy.brain;
	this->setType(copy.type);
}

Cat::~Cat( void ) {
	std::cout << "Destructor Cat called" << std::endl;
	delete this->brain;
}

Cat&	Cat::operator=( const Cat& other ) {
	std::cout << "Copy assignment operator Cat called" << std::endl;
	this->setType(other.type);
	this->brain = other.brain;
	return *this;
}

void	Cat::makeSound( void ) const {
	std::cout << "Miaaaaoouuuuuuuuu......" << std::endl;
}
