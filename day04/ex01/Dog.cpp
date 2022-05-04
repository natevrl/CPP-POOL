#include "Dog.hpp"

// ------------- Init Canonique -----------

Dog::Dog(void) : type("Dog")
{
        std::cout << "Dog's default constructor called" << std::endl;
        this->brain = new Brain();
        return ;
}

Dog::~Dog(void) // Destructor  
{ 
        std::cout << "Dog is done (default destructor called)" << std::endl;
        return ; 
}

std::string Dog::getType(void) const
{
    return (this->type);
}

Dog & Dog::operator=(const Dog &cmp) // Operator Overload =
{
        std::cout << "Copy assignment operator called" << std::endl;
        if ( this != &cmp) // this = pointeur (contient une adresse) & rhs = reference(contient une valeur)
                this->type = cmp.getType();
        return *this;
}


void Dog::makeSound(void) const
{
    std::cout << "WOUUUF-WOUUF" << std::endl;
}

std::ostream & operator<<(std::ostream & o, Dog const & rhs )
{
        o << rhs.getType();
        return o;
}