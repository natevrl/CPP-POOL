#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{

    AAnimal *dog = new Dog();
    AAnimal *cat = new Cat();
    cat->makeSound();
    dog->makeSound();
    std::cout << cat->getType() << std::endl;
    std::cout << dog->getType() << std::endl;
    delete dog;
    delete cat;
    AAnimal abstract;
    AAnimal *abstract2 = new AAnimal();


    return 0;
}