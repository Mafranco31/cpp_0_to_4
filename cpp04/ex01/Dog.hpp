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
	Dog( const Dog& other);
	Dog&	operator= ( const Dog& copy );
	virtual void	makeSound( void ) const;
};

#endif
