#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP


# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

public:
	WrongCat( void );
	virtual ~WrongCat();
	WrongCat( const WrongCat& other);
	WrongCat&	operator= ( const WrongCat& copy );
	virtual void	makeSound( void ) const;
};

#endif
