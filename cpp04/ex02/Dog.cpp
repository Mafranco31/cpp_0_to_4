#include "Dog.hpp"

Dog::Dog ( void ) {
	std::cout << "Default Dog constructor called" << std::endl;
	this->brain = new Brain();
	this->setType("Dog");
}

Dog::Dog ( const Dog &copy ) {
	std::cout << "Copy Dog constructor called" << std::endl;
	this->brain = new Brain(*copy.brain);
	this->setType(copy.type);
}

Dog::~Dog( void ) {
	std::cout << "Destructor Dog called" << std::endl;
	delete this->brain;
}

Dog	&Dog::operator=( Dog other ) {
	std::cout << "Copy assignment operator Dog called" << std::endl;
	Dog::swap(*this, other);
	return *this;
}

void	Dog::swap( Dog &first, Dog &second) {
	std::swap(first.type, second.type);
	std::swap(first.brain, second.brain);
}

void	Dog::makeSound( void ) const {
	std::cout << "Ouaf Ouaf Ouaf !!"<< std::endl;
}

void	Dog::add_idea( std::string idea ) {

	for (int i = 0; i < 100; i++) {
		if (this->brain->get_idea(i) == "") {
			this->brain->set_idea(i, idea);
			return;
		}
	}
	std::cout << "Not enough space in dog's brain!" << std::endl;
}

void	Dog::print_ideas( void ) const {
	std::string str;
	std::cout << "Dog's ideas:" << std::endl;
	for (int i = 0; i < 100; i++) {
		str = this->brain->get_idea(i);
		if (str == "")
			return;
		std::cout << str << std::endl;
	}
}
