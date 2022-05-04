#include "Cat.hpp"

// ------------- Init Canonique -----------

Animal::Animal(void) : type("animal")
{
        std::cout << "Animal's default constructor called" << std::endl;
        return ;
}

Animal::~Animal(void) // Destructor  
{ 
        std::cout << "Animal is done (default destructor called)" << std::endl;
        return ; 
}

std::string Animal::getType(void) const
{
    return (this->type);
}

Animal & Animal::operator=(const Animal &cmp) // Operator Overload =
{
        std::cout << "Copy assignment operator called" << std::endl;
        if ( this != &cmp) // this = pointeur (contient une adresse) & rhs = reference(contient une valeur)
                this->type = cmp.getType();
        return *this;
}

void Animal::makeSound(void) const
{
    std::cout << "Animal's noise per default" << std::endl;
}

std::ostream & operator<<(std::ostream & o, Animal const & rhs )
{
        o << rhs.getType();
        return o;
}