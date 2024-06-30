#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal *array_animals[10];
	for (int i = 0; i < 10; i++) {
		if (i % 2)
			array_animals[i] = new Dog();
		else
			array_animals[i] = new Cat();
	}

	for (int i = 0; i < 10; i++) array_animals[i]->makeSound();


	for (int i = 0; i < 10; i++) delete array_animals[i];

	std::cout << std::endl << "Creating new dog 2:" << std::endl;
	Dog *dog2 = new Dog();
	std::cout << std::endl << "Adding new ideas to dog 2:" << std::endl;
	dog2->add_idea("Hmm... bonnes!");
	dog2->add_idea("I wanna play...");
	
	std::cout << std::endl << "Calling print_ideas of dog2:" << std::endl;
	dog2->print_ideas();


	std::cout << std::endl << "Creating new cat 3, a copy of dog 2" << std::endl;
	Dog *dog3 = new Dog(*dog2);
	std::cout << std::endl << "Adding new ideas to dog 2:" << std::endl;
	dog2->add_idea("Gotta sleep now...");
	std::cout << std::endl << "Calling print_ideas of dog 2:" << std::endl;
	dog2->print_ideas();
	std::cout << std::endl << "Calling print_ideas of dog 3:" << std::endl;
	dog3->print_ideas();

	std::cout << std::endl << "Creating new dog 4" << std::endl;
	Dog *dog4 = new Dog();
	std::cout << std::endl <<"Assigning cat 3 to dog 4:" << std::endl << std::endl;
	*dog4 = *dog3;
	std::cout << std::endl << "Calling print_ideas of dog 4:" << std::endl;
	dog4->print_ideas();

	std::cout << std::endl << "Adding new idea to dog 3:" << std::endl;
	dog3->add_idea("No sleeping now!!!");
	std::cout << std::endl << "Calling print_ideas of dog 3:" << std::endl;
	dog3->print_ideas();
	std::cout << std::endl << "Calling print_ideas of dog 4:" << std::endl;
	dog4->print_ideas();


	std::cout << std::endl << "Calling destruction..." << std::endl;
	delete dog2;
	delete dog3;
	delete dog4;
	return 0;

}
