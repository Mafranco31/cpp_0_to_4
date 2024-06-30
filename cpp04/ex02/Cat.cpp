#include "Cat.hpp"

Cat::Cat ( void ) {
	std::cout << "Default Cat constructor called" << std::endl;
	this->brain = new Brain();
	this->setType("Cat");
}

Cat::Cat ( const Cat &copy ) {
	std::cout << "Copy Cat constructor called" << std::endl;
	this->brain = new Brain(*copy.brain);
	this->setType(copy.type);
}

Cat::~Cat( void ) {
	std::cout << "Destructor Cat called" << std::endl;
	delete this->brain;
}

Cat	&Cat::operator=( Cat other ) {
	std::cout << "Copy assignment operator Cat called" << std::endl;
	Cat::swap(*this, other);
	return *this;
}

void	Cat::swap(Cat &first, Cat &second) {
	std::swap(first.type, second.type);
	std::swap(first.brain, second.brain);
}

void	Cat::makeSound( void ) const {
	std::cout << "Miaaaaoouuuuuuuuu......" << std::endl;
}

void	Cat::add_idea( std::string idea) { 

	for (int i = 0 ;i < 100; i++) {
		if (this->brain->get_idea(i) == "") {
			this->brain->set_idea(i, idea);
			return;
		}
	}
	std::cout << "Not enough space in cat's brain!" << std::endl;
} 

void	Cat::print_ideas( void ) const {
	std::string str;
	std::cout << "Cat's ideas:" << std::endl;
	for (int i = 0; i < 100; i++) {
		str = this->brain->get_idea(i);
		if (str == "")
			return;
		std::cout << str << std::endl;
	}
}
