#ifndef CAT_HPP
# define CAT_HPP


# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {

private:
	Brain*	brain;

public:
	Cat( void );
	virtual ~Cat();
	Cat( const Cat& copy);
	Cat	&operator= ( Cat other );

	virtual void	makeSound( void ) const;
	void	add_idea( std::string idea );
	void	print_ideas( void ) const;
	void	swap(Cat &first, Cat &second);
};

#endif
