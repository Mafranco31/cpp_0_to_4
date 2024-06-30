#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	/*Dog *dog = new Dog();
	Cat *cat = new Cat();

	delete dog;
	delete cat;*/

	Animal *array_animals[10];
	for (int i = 0; i < 10; i++) {
		if (i % 2)
			array_animals[i] = new Dog();
		else
			array_animals[i] = new Cat();
	}

	for (int i = 0; i < 10; i++) array_animals[i]->makeSound();


	for (int i = 0; i < 10; i++) delete array_animals[i];

	std::cout << std::endl << "Creating new cat 2:" << std::endl;
	Cat *cat2 = new Cat();
	std::cout << std::endl << "Adding new ideas to cat 2:" << std::endl;
	cat2->add_idea("Hmm... fish!");
	cat2->add_idea("I wanna play...");
	
	std::cout << std::endl << "Calling print_ideas of cat2:" << std::endl;
	cat2->print_ideas();


	std::cout << std::endl << "Creating new cat 3, a copy of cat 2" << std::endl;
	Cat *cat3 = new Cat(*cat2);
	std::cout << std::endl << "Adding new ideas to cat 2:" << std::endl;
	cat2->add_idea("Gotta sleep now...");
	std::cout << std::endl << "Calling print_ideas of cat 2:" << std::endl;
	cat2->print_ideas();
	std::cout << std::endl << "Calling print_ideas of cat 3:" << std::endl;
	cat3->print_ideas();

	std::cout << std::endl << "Creating new cat 4" << std::endl;
	Cat *cat4 = new Cat();
	std::cout << std::endl <<"Assigning cat 3 to cat 4:" << std::endl << std::endl;
	*cat4 = *cat3;
	std::cout << std::endl << "Calling print_ideas of cat 4:" << std::endl;
	cat4->print_ideas();

	std::cout << std::endl << "Adding new idea to cat 3:" << std::endl;
	cat3->add_idea("No sleeping now!!!");
	std::cout << std::endl << "Calling print_ideas of cat 3:" << std::endl;
	cat3->print_ideas();
	std::cout << std::endl << "Calling print_ideas of cat 4:" << std::endl;
	cat4->print_ideas();

	//Animal	*an = new Animal();

	std::cout << std::endl << "Calling destruction..." << std::endl;
	delete cat2;
	delete cat3;
	delete cat4;
	return 0;

}
