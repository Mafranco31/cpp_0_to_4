#ifndef CAT_HPP
# define CAT_HPP


# include "Animal.hpp"

class Cat : public Animal {

public:
	Cat( void );
	virtual ~Cat();
	Cat( const Cat& copy);
	Cat	&operator= ( Cat other );

	virtual void	makeSound( void ) const;
};

#endif
