#include "Brain.hpp"

Brain::Brain( void ) {}

Brain::~Brain( void ) {}

Brain ( const Brain& copy ) {
	this->ideas = copy.ideas;
}

Brain& operator= ( const Brain& other ) {
	this->ideas = other.ideas;
	return *this;
}
