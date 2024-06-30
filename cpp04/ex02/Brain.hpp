#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>


class	Brain {

private:
	std::string	*ideas;

public:
	Brain( void );
	virtual ~Brain();
	Brain( const Brain& copy);
	Brain&	operator= ( Brain other );

	void	swap(Brain &first, Brain &second);
	std::string	get_idea( unsigned int index ) const;
	void	set_idea( unsigned int index, std::string idea );
};

#endif
