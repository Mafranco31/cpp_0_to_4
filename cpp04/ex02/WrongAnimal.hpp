#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal {

protected:
    std::string type;

public:
    WrongAnimal( void );
	WrongAnimal( const WrongAnimal& other);
    WrongAnimal&   operator= ( const WrongAnimal& copy );
    virtual	~WrongAnimal();
	virtual void	makeSound( void ) const;
	std::string	getType( void ) const;
	void	setType( std::string type );

};

#endif
