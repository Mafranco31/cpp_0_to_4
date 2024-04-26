#ifndef CAT_HPP
# define CAT_HPP


# include "Animal.hpp"

class Cat : public Animal {

public:
	Cat( void );
	virtual ~Cat();
	Cat( const Cat& other);
	Cat&	operator= ( const Cat& copy );
	virtual void	makeSound( void ) const;
};

#endif
