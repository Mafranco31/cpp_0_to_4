#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal {

protected:
    std::string type;

public:
    Animal( void );
	Animal( const Animal& other);
    Animal&   operator= ( const Animal& copy );
    virtual	~Animal();
	virtual void	makeSound( void ) const;
	std::string	getType( void ) const;
	void	setType( std::string type );

};

#endif
