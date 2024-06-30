#include "Brain.hpp"

Brain::Brain( void ) {
	
	std::cout << "Default Brain constructor called" << std::endl;
	this->ideas = new std::string[100];

}

Brain::~Brain( void ) {
	
	std::cout << "Destructor Brain called" << std::endl;
	if (ideas) delete[] ideas;

}

Brain::Brain ( const Brain& copy ) {
	
	std::cout << "Brain copy constructor called" << std::endl;
	
	if (!copy.ideas)  return;

	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = copy.ideas[i];
	}
}

Brain &Brain::operator= ( Brain other ) {
	
	Brain::swap(*this, other);
	return *this;

}

void	Brain::swap(Brain &first, Brain &second) {

	std::swap(first.ideas, second.ideas);

}

std::string	Brain::get_idea( unsigned int index ) const {
	if (index > 99) {
		std::cout << "Cat has 100 ideas but not more" << std::endl;
		return "";
	}
	return this->ideas[index];
}

void	Brain::set_idea( unsigned int index, std::string idea ) {
	if (index > 99) {
		std::cout << "Cat can have a maximum of 100 ideas" << std::endl;
		return ;
	}
	this->ideas[index] = idea;
}

