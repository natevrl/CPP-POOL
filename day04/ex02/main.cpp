#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    int number = 4;
    const Animal *animals[number];
    const Animal *test_copy = new Cat();

    for (int i = 0; i < number; i++)
    {
        if (i % 2 == 0)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    animals[0]->makeSound();
    test_copy->makeSound();
    delete test_copy;
    test_copy = animals[0];
    animals[0]->makeSound();
    test_copy->makeSound();

    for (int i = 0; i < number; i++)
        delete animals[i];
    // delete test_copy;

    return 0;
}