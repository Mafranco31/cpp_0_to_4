#ifndef DOG_HPP
# define DOG_HPP


# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {

private:
	Brain*	brain;

public:
	Dog( void );
	virtual ~Dog();
	Dog( const Dog& copy);
	Dog	&operator= ( Dog other );

	virtual void	makeSound( void ) const;
	void	add_idea( std::string idea );
	void	print_ideas( void ) const;
	void	swap( Dog &first, Dog &second );
};

#endif
